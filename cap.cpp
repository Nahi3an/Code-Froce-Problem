#include <iostream>
using namespace std;


int main(){

string word;

cin>>word;

    if((int)word[0]>=97&&(int)word[0]<=122){

    char w = word[0] - 32;
    word[0] = w;

    }

    cout<<word<<endl;

    return 0;


}
