#include<iostream>
using namespace std;
int main(){
    int n,a;
    bool isEasy=true;
    cin>>n;

    while(n--){
        cin>>a;
        if(a)
            isEasy=false;
    }
    if(isEasy)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
}
