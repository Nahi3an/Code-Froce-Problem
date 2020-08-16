#include <iostream>
using namespace std;


int main(){

int n,k,x[55];

cin>>n;
cin>>k;
int m;
for(int i=0; i<n; i++){

    cin>>x[i];

    if(k-1==i){

    m = x[i];

    }

}


int c = 0;
for(int i=0; i<n; i++){

if(x[i]>=m && x[i]>0){

    c++;

}

}

cout<<c<<endl;


return 0;


}
