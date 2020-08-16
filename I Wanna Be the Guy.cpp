#include<iostream>
using namespace std;

int main(){
int n;
int p,q;
cin>>n;
int levelpass[n+1]={0};
int k=2;
while(k--){

cin>>p;
for(int i=0;i<p;i++){
    int x;
    cin>>x;
    levelpass[x]=1;
}
}
bool win=true;
for(int i=1;i<=n;i++){
    if(!levelpass[i])
        win=false;
}
if(win)
    cout<<"I become the guy."<<endl;
else
    cout<<"Oh, my keyboard!"<<endl;


}
