#include <iostream>
#include <string>
using namespace std;
int main(){


   string s,t;

   cin>>s>>t;
   if(s.length()>100 || t.length()>100){

    return 0;

   }

   int flag = 1;
   for(int i=0 ; i<s.length(); i++){

    if(s[i]!= t[(t.length()-1)-i]){

        flag = 0;
    }

   }


   if(flag == 0){
    cout<<"NO"<<endl;
   }
   else if(flag==1){

    cout<<"YES"<<endl;

   }

   return 0;

}
