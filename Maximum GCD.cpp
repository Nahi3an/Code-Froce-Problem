
#include <iostream>
using namespace std;

int main(){



    int t;
    cin>>t;

    int arr[t];

    for(int i=0; i<t; i++){

        int a;
        cin>>a;

        if(a%2==0){

            arr[i]=a/2;
        }else{

            arr[i] = (a-1)/2;


        }
    }

    for(int i=0; i<t; i++){


        cout<<arr[i]<<endl;

    }

    return 0;







}



