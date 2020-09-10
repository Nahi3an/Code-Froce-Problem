#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    int diff[t];
    for(int i=0; i<t; i++){

        int n;
        cin>>n;

        int arr[n+1];

        int a = 1;
        for(int i=1; i<=n; i++){


            arr[i] = pow(2,a);

            a++;


        }


         int mx = arr[1],in;
         for(int i=1; i<=n; i++){

            if(mx<arr[i]){

                mx = arr[i];
                in = i;
            }

        }

        //cout<<mx<<" "<<in<<endl;

        in = in/2;

        int res = (arr[in]*2) - 2;

        diff[i] = res;


    }

        for(int i=0; i<t; i++)
            cout<<diff[i]<<endl;





}
