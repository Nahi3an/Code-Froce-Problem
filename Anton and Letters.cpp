#include<bits/stdc++.h>
using namespace std;
int main(){
string inp;
set<char>letters;
getline(cin,inp);
for(int i=0;inp[i]!='\0';i++){
    if(inp[i]>='a' and inp[i]<='z'){
        letters.insert(inp[i]);

    }
}
cout<<letters.size()<<endl;
}
