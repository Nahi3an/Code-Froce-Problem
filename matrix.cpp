#include <iostream>
using namespace std;

int main(){

int x[7][7];


for(int i=1; i<=5; i++){

    for(int j=1; j<=5; j++){

        cin>>x[i][j];

    }

}

int c, r;

for(int i=1; i<=5; i++){

    for(int j=1; j<=5; j++){

       if(x[i][j]==1){

            c = 3-j;
            r = 3 - i;

       }
    }
}

if(0>c){

    c = c*(-1);
}

if(0>r){

    r = r*(-1);
}

cout<<r+c<<endl;




}
