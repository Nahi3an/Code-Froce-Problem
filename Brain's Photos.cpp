#include <iostream>
using namespace std;

int main(){


    int n,m;
    cin>>n>>m;

    char arr[n][m];

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

             cin>>arr[i][j];
        }
    }

   // int count = 0;
   int flag = 0;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            char c = arr[i][j];


            if(c=='M'||c=='C'||c=='Y'){

               flag  = 1;
               break;
            }


        }
    }




    if(flag==0){

        cout<<"#Black&White"<<endl;
    }else{

        cout<<"#Color"<<endl;

    }

    return 0;


}
