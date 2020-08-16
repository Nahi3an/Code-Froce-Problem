#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,h;

    cin>>n;
    cin>>h;
    if((n<1 || n>1000)||(h<1 || h>1000)){
        return 0;

    }


    int x[n];

      for(int i=0; i<n; i++){

        cin>>x[i];

    }


    int sum = 0;

    for(int i=0; i<n; i++){

        if(x[i]>h){

            sum = sum + 2;

        }
        else if(x[i]<=h){

            sum = sum + 1;
        }


    }

    cout<<sum<<endl;

    return 0;





}
