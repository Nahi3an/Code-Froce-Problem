#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;
    int res[t];
    for(int i=0; i<t; i++){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int odd=0,even=0;//[n/2 + 1], even[n/2 +1];

    for(int i=0; i<n ; i++){

        if(i%2==0 && arr[i]%2!=0){

            even++;

        }
        else if(i%2!=0 && arr[i]%2==0){

            odd++;
        }
    }

    //cout<<"Even "<<even<<" ODD "<<odd<<endl;
    if(even!=odd){


        res[i] = -1;


    }else if(even==odd){

        res[i] = even;


    }


    }

    cout<<endl;
    for(int i=0; i<t ; i++){

        cout<<res[i]<<endl;
    }

    return 0;





}
