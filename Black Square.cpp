#include <iostream>
using namespace std;

int main(){

    int arr[4];

    for(int i=0; i<4; i++){

        cin>>arr[i];
    }

    string str;

    cin>>str;

    int c[4] = {0};
    for(int i=0; i<str.length(); i++)
      {
          if(str[i]=='1'){
            c[0]++;
          }else if(str[i]=='2'){
            c[1]++;
          }else if(str[i]=='3'){
            c[2]++;
          }
          else{

            c[3]++;
          }
      }



      int res = 0;
      for(int i=0; i<4; i++){

        if(i==0){

            res = res + c[0]*arr[i];

        }else if(i==1){

            res = res+ c[1]*arr[i];

        }else if(i==2){

            res = res + c[2]*arr[i];

        }else{
            res = res + c[3]*arr[i];

        }
      }

    cout<<res<<endl;







}







