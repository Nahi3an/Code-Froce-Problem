#include <iostream>
#include <string>
using namespace std;

int main(){


int n;
cin>>n;
string word[101];

for(int i =1 ; i<=n; i++){

    cin>>word[i];

}

for(int i =1 ; i<=n; i++){

    if(word[i].length()>10){

    string str = word[i];

    int sum = 0;
    for( int j = 1; j<word[i].length()-1; j++){

     sum++;

    }

    cout<<str[0]<<sum<<str[word[i].length()-1]<<endl;

    }
    else{

        cout<<word[i]<<endl;
    }

}

return 0;

}
