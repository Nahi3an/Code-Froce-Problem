#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int numswap=0,minidx=0,maxidx=0,mins=-1,maxs=-1;

for(int i=0;i<n;i++){
    cin>>arr[i];
    if(mins==-1 and maxs==-1)
    {
        mins=arr[i];
        maxs=arr[i];
        minidx=i;
        maxidx=i;
        continue;
    }
    if(mins>=arr[i]){
        mins=arr[i];
        minidx=i;
    }
    if(maxs<arr[i]){
        maxs=arr[i];
        maxidx=i;
    }
}
if(maxidx==0 and minidx==n-1){
        cout<<"0"<<endl;
    return 0;
}

for(int i=minidx;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        swap(arr[i],arr[i+1]);
        i--;
        numswap++;
    if(i==maxidx)
        maxidx=i;
    }
}
for(int i=maxidx;i>0;i--){
    if(arr[i-1]<arr[i]){
            swap(arr[i-1],arr[i]);
            //i++;
            numswap++;

    }
}
/*
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<numswap<<endl;
*/

//cout<<maxs<<"idx "<<maxidx<<endl;
//cout<<mins<<"idx "<<minidx<<endl;
cout<<numswap<<endl;
}
