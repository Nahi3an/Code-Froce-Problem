#include <iostream>
using namespace std;


struct timespan{

    int enter,exit,sum;


};

int main(){

int n;
cin>>n;

if(n<2 || n>1000){
    return 0;
}

struct timespan time[n];



for(int i = 0; i<n; i++){

    cin>>time[i].enter;
    cin>>time[i].exit;

    if(time[i].enter<0 || time[i].exit>1000){

        return 0;
    }
}


time[0].sum = time[0].enter + time[0].exit;
for(int i = 0; i<n-1; i++){

   int sum = time[i].sum;
   int diff = sum - time[i+1].enter;

   sum = diff + time[i+1].exit;

   time[i+1].sum = sum;

}

int max = time[0].sum;

for(int i= 0; i<n ; i++){

if(time[i].sum>max){

    max = time[i].sum;

}

}

cout<<max<<endl;

return 0;
}
