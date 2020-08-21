
#include <bits/stdc++.h>
using namespace std;


int main(){

int n;
cin>>n;

int num[n],s[n];

for(int i=0; i<n; i++){

    cin>>num[i];

    int number = num[i];
    int count = 0;

    while(number!=0){

    int res = number%10;
    number = number/10;

    if(res!=0)
    count++;

    }
    s[i] = count;
}

for(int i=0; i<n; i++){

    cout<<s[i]<<endl;

    int mul = 1;

    while(num[i]!=0){

    int res = num[i]%10;
    num[i] = num[i]/10;

    if(res!=0)
    cout<<res*mul<<" ";

     mul = mul*10;
    }

    cout<<endl;
}



return 0;
}
