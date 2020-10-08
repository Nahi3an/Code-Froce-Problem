#include <iostream>
using namespace std;

int main(){

    int arr[4];

    for(int i=0; i<4; i++){

        cin>>arr[i];
    }

    string str;

    cin>>str;

    int a=0,b=0,c=0,d=0;
    for(int i=0; i<str.length(); i++)
      {
          if(str[i]=='1'){
            a++;
          }else if(str[i]=='2'){
            b++;
          }else if(str[i]=='3'){
            c++;
          }
          else{

            d++;
          }
      }

      //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl

        int res = 0;
      for(int i=0; i<4; i++){

        if(i==0){

            res = res + a*arr[i];

        }else if(i==1){

            res = res+ b*arr[i];

        }else if(i==2){

            res = res + c*arr[i];

        }else{
            res = res + d*arr[i];

        }
      }

    cout<<res<<endl;







}







