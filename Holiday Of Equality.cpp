#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int m[n];

    for(int i=0; i<n; i++){
        cin>>m[i];
    }

    int max = 0;
    for(int i=0; i<n; i++){

        if(max<m[i]){
            max = m[i];
        }
    }

    int sum = 0;
    for(int i=0; i<n ; i++){


        if(max>m[i]){

            sum = sum + (max-m[i]);

        }
    }

    cout<<sum<<endl;

    return 0;
}
