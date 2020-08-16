#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sequence[n];
int maxSeq=0,c=0;
for(int i=0;i<n;i++)
    cin>>sequence[i];
for(int i=0;i<n-1;i++){
    if(sequence[i]<=sequence[i+1]){
        c++;
        //cout<<sequence[i]<<endl;
    }else{
        //cout<<"else : "<<sequence[i]<<endl;
    maxSeq=maxSeq>c?maxSeq:c;
    c=0;
    }

}
maxSeq=maxSeq>c?maxSeq:c;
cout<<maxSeq+1<<endl;

}
