#include<iostream>

using namespace std;
int main(){

int n;
cin>>n;
if(!n>=1 and !n<=50)
    return 0;
char str[n];
cin>>str;
int c=0;
for(int i=0;i<n-1;i++){
    if(str[i]==str[i+1])
        c++;
}
cout<<c<<endl;

}
