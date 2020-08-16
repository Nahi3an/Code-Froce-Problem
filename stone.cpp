#include <iostream>
using namespace std;

const int maximum=55;
char str[maximum];

int main(){
int n;
cin>>n;

for(int i=0; i<n; i++){
    cin>>str[i];
}

int c = 0;
for(int i=0; i<n; i++){

if(str[i]=='R'||str[i]=='G'||str[i]=='B'){

if(str[i]==str[i+1]){
  c++;
}
}else{

   c = 0;

}

}
cout<<c<<endl;

return 0;

}


/*

RRGBBBBBRRRGGGRBR

 */
