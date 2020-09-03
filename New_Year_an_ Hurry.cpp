#include <bits/stdc++.h>
using namespace std;
int main() {



    int n,k;

    cin>>n>>k;

    int rem = 240-k;

    int t =0, c=0;
    for(int i=1; i<=n; i++) {

        t = t  + i*5;
        if(t<=rem) {

            c++;
            }
        else {

            break;
            }

        }

//cout<<t<<endl;
    cout<<c<<endl;

    return 0;
    }
