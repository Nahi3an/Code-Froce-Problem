#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin>>t;

    int a[t],b[t];

    for(int i=0; i<t; i++) {
        cin>>a[i]>>b[i];
        }


    for(int i=0; i<t; i++) {

        int c = 0;

        if(a[i]>=b[i]) {

            int mod = a[i]%b[i];

            if(mod==0) {
                cout<<c<<endl;
                }
            else {
                c = b[i]-mod;
                cout<<c<<endl;

                }

            }
        else if(a[i]<b[i]) {

            c = b[i] - a[i];
            cout<<c<<endl;

            }
        }



    return 0;

    }
