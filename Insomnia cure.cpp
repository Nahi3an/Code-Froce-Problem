#include<iostream>
using namespace std;
int main(){
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
int arr[d+1]={0};

for(int i=0;i<=d;i+=k){
    if(i==0)
        continue ;
    arr[i]=1;
}
for(int i=0;i<=d;i+=l){
    if(i==0)
        continue ;
    arr[i]=1;
}
for(int i=0;i<=d;i+=m){
    if(i==0)
        continue ;
    arr[i]=1;
}
for(int i=0;i<=d;i+=n){
    if(i==0)
        continue ;
    arr[i]=1;
}
int counter=0;
for(int i=1;i<=d;i++){

    if(arr[i])
        counter++;
}
cout<<counter<<endl;

}
