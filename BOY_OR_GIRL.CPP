#include<iostream>
#include<set>
using namespace std;
int main(){
char name[100];
cin>>name;
set<char> st;
for(int i=0;name[i]!=NULL;i++){
    st.insert(name[i]);
}
if(st.size()%2==0){
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
cout<<"IGNORE HIM!"<<endl;


}
