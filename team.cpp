#include <iostream>
using namespace std;

int main(){

int n, x[1005][5];
cin>>n;

for(int i = 0 ; i<n ; i++){
for(int j = 0 ; j<3;j++){

    cin>>x[i][j];
}

}

int c = 0;

for(int i = 0 ; i<n ; i++){

int sum = 0;

for(int j = 0 ; j<3;j++){

   sum += x[i][j];
}

if(sum!=1&&sum!=0){
    c ++;

}

}

cout<<c<<endl;

return 0;

}
