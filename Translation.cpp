/**
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar:
 a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely.
 For example, a Berlandish word code corresponds to a Birlandish word edoc. However,
it's easy to make a mistake during the «translation».
 Vasya translated word s from Berlandish into Birlandish as t
 . Help him: find out if he translated the word correctly.
*/

#include<iostream>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
bool correct=false;


    if(s.size()==t.size()){
            int n=t.size();
            correct=true;///assume it its a correct translation
        for(int i=0;i<n;i++){
            if(s[i]!=t[n-i-1]){
                correct=false;
                break;
            }
        }


    }

if(correct)
    cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}

}
