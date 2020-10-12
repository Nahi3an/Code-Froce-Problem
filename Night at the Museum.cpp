#include <iostream>
#include <math.h>
using namespace std;

int main(){


   //int alph[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    //int rever[] ={26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    string str;
    cin>>str;

    char c= 'a';
    int sum = 0;
     for(int i=0; i<str.length(); i++){

           int diff_1= abs((int)c - (int)str[i]);
           int mn = min((int)c,(int)str[i]);
           int mx = max((int)c,(int)str[i]);

           int diff_2 = abs((mn+26)-mx);

           sum =sum+  min(diff_1,diff_2);

           c = (int)str[i];

     }

     cout<<sum<<endl;


    }




