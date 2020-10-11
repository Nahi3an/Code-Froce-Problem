#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        if(b%a==0){

            cout<<a<<" "<<b<<endl;

        }else{

            int rem = b%a;
            int c = b-rem;

            if(a==c){

                cout<<-1<<" "<<-1<<endl;

            }else{

                cout<<a<<" "<<c<<endl;

            }

        }

    }

    return 0;









}
