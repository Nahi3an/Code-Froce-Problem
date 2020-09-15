#include <bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

long long int res[t];

for(int i=0; i<t; i++){


    int n;
    cin>>n;

    long int a[n], b[n];

    for(int i=0; i<n; i++){

        cin>>a[i];
    }


    for(int i=0; i<n; i++){

        cin>>b[i];
    }

    long int a_min = a[0];
    for(int i=0; i<n; i++){

        if(a_min>a[i]){

            a_min = a[i];
        }
    }

    long int b_min = b[0];
    for(int i=0; i<n; i++){


        if(b_min>b[i]){

            b_min = b[i];
        }
    }


    long long int ans = 0;

    for(int i=0; i<n; i++){

     //ans = ans + max(a[i] - a_min, b[i] - b_min);
     //cout<<max(a[i] - a_min, b[i] - b_min)<<endl;

     ans = ans + max(a[i] - a_min, b[i] - b_min);


    }

    //cout<<ans<<endl;
    res[i] = ans;

    }


     for(int i=0; i<t; i++){

      cout<<res[i]<<endl;



    }


}




