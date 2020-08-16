#include <iostream>
#include <string>
using namespace std;

int main(){

string s1, s2;

cin>>s1;
cin>>s2;
for(int i=0; i<s1.length(); i++){

    int a = s1[i];
    int b = s2[i];

    if(a>=97&&a<=122){

        char c = s1[i] -32;

        s1[i] = c;

    }

    if(b>=97&&b<=122){

        char c2 = s2[i] -32;

        s2[i] = c2;

    }
    }

   if(s1==s2){

    cout<<0<<endl;

   }
   else if(s2>s1){

    cout<<-1<<endl;


   }else if(s1>s2){

    cout< <1<<endl;

   }

    return 0;
}



