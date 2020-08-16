#include<iostream>
#include<cstring>
using namespace std;


int main(){

char word[101];

cin>>word;
int up=0,total=0;

for(int i=0;word[i]!=NULL;i++){
    total++;
    if(word[i]>='A' and word[i]<='Z')
        up++;
}
if(up>total-up)
    for(int i=0;word[i]!=NULL;i++)
        word[i]=toupper(word[i]);
else
    for(int i=0;word[i]!=NULL;i++)
        word[i]=tolower(word[i]);

cout<<word<<endl;


}
