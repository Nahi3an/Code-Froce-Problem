#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;

    int arr[t];

    int i =0;
    while(i<t){


    int num;
    cin>>num;


    if(num%2==0){

        arr[i] = num/2;

    }else{

        arr[i] = (num/2) + (num%2);

    }

    i++;



    }


    for(int i=0; i<t; i++){

        cout<<arr[i]<<endl;
    }

    return 0;

}
