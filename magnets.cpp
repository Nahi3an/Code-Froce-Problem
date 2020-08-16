#include <bits/stdc++.h>

using namespace std;

int main() {


    int n;

    cin>>n;

    if(n<1 || n>100000)
        return 0;


    int x[n];

    for(int i = 0; i<n ; i++) {


        cin>>x[i];


        }



    int sum=0;
    if(n==1){
        sum=1;

    }else{

        for(int i = 0; i<n; i++){

        if(x[i]!=x[i+1]){


        sum++;

        }

    }



    }





    cout<<sum<<endl;

    return 0;


    }
