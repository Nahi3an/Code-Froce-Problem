#include <bits/stdc++.h>
using namespace std;


int main(){

int t;
cin>>t;

int N[t];
int num[1005][55];

for(int i=0; i<t; i++){
    int n;
    cin>>n;

    N[i] = n;

    for(int j=0; j<n;j++){

    cin>>num[i][j];


    }

}

for(int i=0; i<t; i++){

    sort(num[i],num[i]+N[i]);

}

for(int i=0; i<t ; i++){

    bool flag = true;

    for(int j=0; j<N[i]; j++){

        if(num[i][j+1]-num[i][j]>1){

            flag = false;
            break;
        }
    }

        if(flag){

            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }



}





    return 0;


}



