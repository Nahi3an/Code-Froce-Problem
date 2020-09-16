#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {

    return a>b;

    }
int main() {

    int t;
    cin>>t;
    int res[t];

    for(int i=0; i<t; i++) {


        int n;
        cin>>n;
        int p[n];

        for(int i=0; i<n; i++) {
            cin>>p[i];
            }

        sort(p,p+n,cmp);

        int mn = p[0]-p[1];
        for(int i=0; i<n-1; i++) {

            if(mn>p[i]-p[i+1]) {

                mn = p[i]-p[i+1];
                }
            }
        res[i]=mn;

        }


    for(int i=0; i<t; i++) {

        cout<<res[i]<<endl;


        }



    return 0;



    }
