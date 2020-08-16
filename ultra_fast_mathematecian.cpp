#include <iostream>

using namespace std;

int main(){


string x,y;

cin>>x>>y;

if(x.length()<1 || x.length()>100)
    return 0;

string z;
for(int i=0; i<x.length(); i++){

    if(x[i]!=y[i]){

        z = z + "1";

    }
    else {

        z = z + "0";
    }
}

cout<<z<<endl;

return 0;






}
