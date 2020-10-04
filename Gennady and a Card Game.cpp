#include <iostream>
#include <vector>
using namespace std;

int main(){

    char input[1][2];

    for(int i =0 ; i<1; i++){

        for(int j =0; j<2; j++){

            cin>>input[i][j];
        }
    }

    char card[5][2];


    for(int i =0 ; i<5; i++){

        for(int j =0; j<2; j++){

            cin>>card[i][j];
        }
    }

      bool flag = false;
     for(int i =0 ; i<5; i++){

        for(int j =0; j<2; j++){

           if(input[0][0] == card[i][j]){

                //cout<<"YES"<<endl;
                flag = true;
                break;

           }else if(input[0][1]== card[i][j]){


            ///cout<<"YES"<<endl;

                flag = true;

                break;

           }

        }
    }




        if(flag==false){


            cout<<"NO"<<endl;

        }else{


            cout<<"YES"<<endl;

        }


        return 0;










}
