#include <iostream>
using namespace std;


int main() {


    int t;
    cin>>t;

    int arr[t+1];

    for(int i=1; i<=t; i++) {

        cin>>arr[i];

        }

    //cout<<t/3<<endl;

    int a=0,b=0,c=0;
    for(int i=1; i<=t; i++){


        if(arr[i]==1){

           a++;

        }
        else if(arr[i]==2){

           b++;

        }else if(arr[i]==3){

          c++;

        }
    }

   // cout<<a<<" "<<b<<" "<<c<<endl;

    int team[3] = {a,b,c};

    int mn = team[0];

    for(int i=0; i<3; i++){

        if(mn>team[i]){

            mn = team[i];
        }
    }

    cout<<mn<<endl;



    for(int k=0; k<mn; k++){

        for(int j=1; j<=3; j++) {

        for(int i=1; i<=t; i++) {

            if(arr[i]==j&&arr[i]!=-1) {

                cout<<i<<" ";
                arr[i]=-1;
                break;


                }


            }

        }

        cout<<endl;


    }


}
