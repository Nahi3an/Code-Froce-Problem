#include <iostream>
using namespace std;


int main() {

    int k,n, w;


      cin>>k>>n>>w;


    if(!w>=1 && !w<=1000){

        return 0;
    }

    int sum = 0;

    for(int i=1; i<=w; i++) {

        sum = sum + (i*k);

    }

    int borrow;

    if(n>sum){

        borrow = 0;

        cout<<borrow<<endl;
    }else{

        borrow = sum - n;
        cout<<borrow<<endl;
    }




    return 0;


}
