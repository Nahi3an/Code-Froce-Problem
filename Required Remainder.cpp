#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        long int x,y,n;

        cin>>x>>y>>n;

        int rem = n%x;


        if(rem>=y){


            n = n-(rem-y);
            cout<<n<<endl;
        }
        else{


            n=n-rem-x+y;

            cout<<n<<endl;
        }

        }

        return 0;
    }






