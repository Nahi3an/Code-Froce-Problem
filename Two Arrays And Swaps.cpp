#include <bits/stdc++.h>
using namespace std;


int main(){


    int t;
    cin>>t;

    int sum[t];
    int c=0;
    for(int i=1; i<=t; i++){

    int n,k;
    cin>>n>>k;


    int a[n+2],b[n+2];

    for(int i=0; i<n; i++){

        cin>>a[i];
    }

    for(int i=0; i<n; i++){

        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n,greater<int>());



    int temp;

    for(int i=0; i<k;i++){

        if(a[i]<b[i]){

            temp = a[i];
            a[i] = b[i];
            b[i] = temp;

        }
    }



    int s=0;
    for(int i=0; i<n;i++){

        s = s + a[i];
    }


        sum[c] = s;


        c = c+1;


    }

    for(int i=0; i<t; i++){

        cout<<sum[i]<<endl;
    }





    return 0;



}


