#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;

    char c[n];
    for(int i=0; i<n; i++) {

        cin>>c[i];

        }

    for(int i=0; i<n; i++) {

        if(c[i]>=97&&c[i]<=122)
            c[i]=c[i]-32;

        }

    sort(c,c+n);
    int count=0;

    for(int i=0; i<n; i++) {

        if(c[i]!=c[i+1])
            count++;

        }

    if(count>=26) {

        cout<<"YES"<<endl;
        }
    else {
        cout<<"NO"<<endl;
        }

    return 0;
    }
