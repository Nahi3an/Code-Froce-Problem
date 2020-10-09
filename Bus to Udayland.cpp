#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char seats[n][5];

    for(int i=0; i<n; i++){

        for(int j=0; j<5; j++){

            cin>>seats[i][j];
        }
    }

    int flag = false;
    for(int i=0; i<n; i++){

        for(int j=0; j<5-1; j++){

            if(j==2) continue;

            if(seats[i][j]=='O' && seats[i][j+1]=='O'){

                seats[i][j] = '+';
                seats[i][j+1] = '+';

                flag = true;
                break;
            }
        }

        if(flag){

            cout<<"YES"<<endl;
            break;
        }

    }

    if(flag){

         for(int i=0; i<n; i++){

        for(int j=0; j<5; j++){

            cout<<seats[i][j];
        }
        cout<<endl;
    }
    }else{

        cout<<"NO"<<endl;
    }








}
