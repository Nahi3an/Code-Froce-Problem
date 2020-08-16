#include<iostream>

using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;
int s=a+b*c;
int s0=max(s,a+b+c);
int s1=max(a+(b*c),s0);
int s2=max((a*b*c),s1);
int s3=max((a+b)*c,s2);
int s4=max(a*(b+c),s3);
cout<<s4<<endl;

}

