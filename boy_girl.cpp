#include <bits/stdc++.h>

using namespace std;

int main() {

    set <char> setVar;
    set <char> :: iterator setIter;
    string name;

    cin>>name;

    for(int i=0; i<name.length(); i++) {

       setVar.insert(name[i]);

    }

    int c =0;
    for(setIter = setVar.begin(); setIter!= setVar.end(); setIter++){

        c++;
    }


    if(c%2!=0){

        cout<<"IGNORE HIM!"<<endl;
    }else{

        cout<<"CHAT WITH HER!"<<endl;
    }


    }




///wjmzbmr









