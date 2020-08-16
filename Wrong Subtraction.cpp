#include<iostream>
using namespace std;
int main(){
int num,k;
cin>>num>>k;
while(k){
    int lsDigit=num%10;
    if(lsDigit){
        num--;
    }else{
    num/=10;
    }
    k--;
}
cout<<num<<endl;
}
