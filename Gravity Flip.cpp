#include<iostream>
using namespace std;
int main(){

int n,i=0;
cin>>n;
int arr[n];
while(i<n){
        cin>>arr[i];
    i++;
}

for(int i=n-1;i>0;i--){
    if((arr[i-1]>arr[i]))
        for(int j=i;j<n;j++){
            if((arr[j-1]>arr[j])){
                int temp=arr[j-1]-arr[j];
                arr[j]+=(temp);
                arr[j-1]-=temp;
            }

        }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
