#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;

    int a=2, b =1, c=0;
    while(true){

        n = n - b;

        b = b + a;

        a++;
        c++;
        if(n<b){
            break;
        }

    }

    cout<<c<<endl;
    return 0;






}
