#include <iostream>
using namespace std;

int main(){


int n;

cin>>n;

string str[n];

for(int i=0; i<n; i++){


    cin>>str[i];
}

for(int i=0; i<n; i++){

  string word = str[i];

   for(int j=0; j<str[i].length(); j=j+2){

    cout<<word[j];

   }

   cout<<word[str[i].length()-1];
   cout<<endl;
}





}
