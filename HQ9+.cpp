#include<iostream>
using namespace std;
string code="HQ9+";
bool isthere(char a){
for(int i=0;i<4;i++){
    if(a==code[i])
        return true;
}
return false;
}
int main(){
char p[101];
cin>>p;
bool willpritOp=false;
for(int i=0;p[i]!=NULL;i++){
    if(isthere(p[i])){
        willpritOp=true;

    }
}
if(willpritOp)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
