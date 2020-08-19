
#include <iostream>
using namespace std;

int main() {

    int t;
     cin>>t;
    long int candies[t];

    for(int i=0; i<t; i++) {
        cin>>candies[i];
        }

    long int div = 0;
    for(int i=0; i<t; i++) {

        if(candies[i]%2!=0) {
            div = candies[i]/2;
            cout<<div<<endl;
            }
        else if(candies[i]%2==0) {
            div = (candies[i]/2) - 1;
            cout<<div<<endl;
            }
        }
    return 0;

    }
