#include<iostream>
using namespace std;
int main(){

int n, h;
cin>>n>>h;
int totalW=0;
while(n--){
    int a;
    cin>>a;
    if(a<=h)
        totalW++;
    else
        totalW+=2;
}
cout<<totalW<<endl;

}
