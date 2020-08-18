#include<iostream>
using namespace std;
int main(){
int n,m;

cin>>n>>m;
int i=0;
int j=0;
int flag=1;//Akshat
while(i<n and j<m){
    i+=1;
    j+=1;
    if(flag==1){
        flag=2;
    }else{
    flag=1;
    }
}
if(flag==1){
cout<<"Malvika"<<endl;
}else{
cout<<"Akshat"<<endl;
}

}
