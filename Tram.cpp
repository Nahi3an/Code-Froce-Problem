#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int numOfPessangerExit=0,numOfPessangerEnter=0;
int maxPessanger=0,currPessanger=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>numOfPessangerExit>>numOfPessangerEnter;
    //if(numOfPessangerExit>0)
    currPessanger=currPessanger-numOfPessangerExit+numOfPessangerEnter;
    maxPessanger=max(currPessanger,maxPessanger);
}
cout<<maxPessanger<<endl;
}
