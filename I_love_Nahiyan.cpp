#include <iostream>
using namespace std;

int main(){


int n;
cin>>n;

int scr[n];


for(int i=0; i<n; i++){

    cin>>scr[i];
}
int mx, mn, max_c, min_c;

mx = mn = scr[0];
max_c = min_c = 0;

for(int i=0; i<n; i++){

if(mx<scr[i]){

    mx = scr[i];

    max_c++;
}

if(mn>scr[i]){

    mn = scr[i];

    min_c++;
}

}

cout<<max_c + min_c<<endl;

return 0;
}
