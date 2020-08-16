#include<iostream>
#include<math.h>
using namespace std;

int main(){
      double m,n,a;


    cin>>n>>m>>a;
    if(n>=1 and n<=pow(10,9) and m>=1 and m<=pow(10,9) and a>=1 and a<=pow(10,9) ){
        cout<<ceil(n/a)*ceil(m/a)<<endl;
    }
    return 0;


}




