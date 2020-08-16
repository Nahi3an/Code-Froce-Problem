#include<iostream>
using namespace std;
int main(){
int n,i=1;
cin>>n;
string feelings="";
while(i<=n){
    if(i!=1)
        feelings+="that ";
    if(i%2==0){
        feelings+="I love ";
    }else{
    feelings+="I hate ";
    }
    i++;
}
feelings+="it ";
cout<<feelings<<endl;
}
