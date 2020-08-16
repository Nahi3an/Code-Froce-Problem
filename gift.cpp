#include <iostream>
using namespace std;

int main() {


    int n;

    cin>>n;
    if(n<1 ||n>100)
        return 0;


    int x[n];


    for(int i = 1; i<=n; i++) {

        cin>>x[i];

        }



    for(int i = 1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            if(x[j]==i) {

                cout<<j<<" ";

                }

            }


        }




    return 0;

    }
