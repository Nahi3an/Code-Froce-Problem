#include<iostream>
using namespace std;
int main(){
string line1,line2,newstr="";

cin>>line1>>line2;
///length is same in both line1 an line2
for(int i=0;i<line1.size();i++){
    if(line1[i]==line2[i])
    {
        newstr+="0";
    }else
        newstr+="1";
}
cout<<newstr<<endl;

}
