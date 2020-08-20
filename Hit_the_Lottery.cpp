#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int bill=0;

if(n>=100){

    bill= bill+n/100;

    n = n%100;
}

if(n>=20&&n<100){

    bill= bill+n/20;

    n = n%20;
}
if(n>=10&&n<20){

    bill= bill+n/10;

    n = n%10;
}
if(n>=5&&n<10){

    bill= bill+n/5;

    n = n%5;
}

if(n>=1&&n<5){

    bill= bill+n/1;
}


cout<<bill<<endl;
return 0;







}
