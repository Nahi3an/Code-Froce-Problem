#include<bits/stdc++.h>
using namespace std;
int main(){
set<int> horseshoe;
int n;
n=4;
while(n--){
    int s;
    cin>>s;
    horseshoe.insert(s);

}

cout<<4-horseshoe.size()<<endl;
}
