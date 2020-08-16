#include<iostream>
#include<vector>
using namespace std;
int main(){
string str,newstr="";
cin>>str;

for(int i=0;i<str.size();i++){
    if(str[i]=='W'){
        int found=0;
        if(str[i+1]=='U')
            if(str[i+2]=='B')
                found=1;
        if(found)
        {
            i+=2;

            //nstr.push_back(newstr);
            newstr+=" ";

        }
        else
            newstr+=str[i];

    }
    else
        newstr+=str[i];

}
//cout<<newstr<<endl;
bool f=true;
for(int i=0;i<newstr.size();i++){
    if(newstr[i]==' ' and f){

    }else{
    cout<<newstr[i];
    f=false;
    }
}cout<<endl;

}
