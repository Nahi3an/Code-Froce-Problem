#include <iostream>

using namespace std;

int main(){


int a,b;

cin>>a>>b;

if((a<1 && a>10) || (b<1 && b>10)){

    return 0;
}

int count = 0;
while(b>=a){

    a = a*3;
    b = b*2;

    count ++;

}


cout<<count<<endl;

return 0;






}
