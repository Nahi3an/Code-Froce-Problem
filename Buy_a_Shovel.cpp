#include <iostream>
using namespace std;

int main() {

    int price,coin;

    cin>>price>>coin;

    int rem = -1, count=0,m,i =1;
    while(true){

    m = price*i;
    rem = m%10;
    count ++;
    i++;

    if(rem==0||rem==coin){

        break;
    }

    }

    cout<<count<<endl;

    return 0;



    }
