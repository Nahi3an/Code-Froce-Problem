#include <iostream>
using namespace std;

int main(){



    int t;
    cin>>t;

    int arr[t];

    for(int i=0; i<t; i++){


        int n,m;
        cin>>n>>m;

        if(m%2==0){

            arr[i] = (m/2)*n;

        }else if(m%2!=0){


            int a , b;

            a = (m-1)/2*n;

            if(n%2==0){

                b = n/2;

            }else if(n%2!=0){

                b = n/2 + (n%2);
            }

            arr[i] = a + b;


        }
    }


    for(int i=0; i<t; i++){


        cout<<arr[i]<<endl;
    }








}
