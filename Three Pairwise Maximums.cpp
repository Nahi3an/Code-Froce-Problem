#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

       int a,b,c;
       cin>>a>>b>>c;

       if(a==b && a>=c){

        cout<<"YES"<<endl;
        cout<<a<<" "<<c<<" "<<c<<endl;

       }else if(a==c && a>=b){

         cout<<"YES"<<endl;
         cout<<a<<" "<<b<<" "<<b<<endl;


       }else if(b==c && b>=a){

         cout<<"YES"<<endl;
         cout<<b<<" "<<a<<" "<<a<<endl;

       }else{

          cout<<"NO"<<endl;
       }




    }




    return 0;


}
