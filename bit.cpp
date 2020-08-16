#include <iostream>
#include <string>
using namespace std;

int main(){

int n,x=0;
string input[155];
cin>>n;

for( int i =0; i<n; i++){


    cin>>input[i];
}

for(int i = 0 ;i<n; i++){

    if(input[i]=="X++"||input[i]=="++X"){

    x++;

    }else if(input[i] == "X--"||input[i]=="--X"){

    x--;

    }
}

cout<<x<<endl;

return 0;
}
