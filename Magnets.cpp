#include<iostream>
using namespace std;
int main(){
int n,samepole=-1,pole;
int g=0;
cin>>n;
while(n--){
    cin>>pole;
    if(samepole==-1){
        samepole=pole;
        g++;
    }
    if (samepole!=pole){
        g++;
        samepole=pole;
    }

}
cout<<g<<endl;
}
