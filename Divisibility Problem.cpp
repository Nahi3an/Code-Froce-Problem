#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){

    long int a,b;
    cin>>a>>b;
    int totalinc=0;
    while(a%b!=0){
        a++;
        totalinc++;
    }
    cout<<totalinc<<endl;
}
}
