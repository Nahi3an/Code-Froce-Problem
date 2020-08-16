#include<iostream>
using namespace std;
int main(){
int l=4;
int maxnum=0,largeSeq=0,tempSeq=0;
int a[]={5,4,2,2,3,1,1,1,1};
int n=sizeof(a)/sizeof(a[0]); // get the array length
for (int i=0;i<n;i++){
    if (a[i]<=l){
        maxnum+=a[i];
        tempSeq+=1;
        if (maxnum>l){
            maxnum=a[i];
            tempSeq=1;
        }else if(maxnum==l){
        largeSeq=tempSeq>largeSeq?tempSeq:largeSeq;
        maxnum=tempSeq>1?a[i]:0;
        tempSeq=tempSeq>1?1:0;
        }
    }
}
cout<<largeSeq<<endl;
}
