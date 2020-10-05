#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int res[t];


    for(int i=0; i<t; i++){


        int a,b;

        cin>>a>>b;

        if(a<b){


            if(abs(a-b)%2!=0){

                res[i] = 1;

            }else{

                res[i] = 2;

            }
        }else if(a>b){

            if(abs(a-b)%2==0){

                res[i] = 1;

            }else{

                res[i] = 2;

            }

        }else{

            res[i] = 0;

        }


    }

    for(int i=0; i<t; i++){

        cout<<res[i]<<endl;
    }

    return 0;





}
