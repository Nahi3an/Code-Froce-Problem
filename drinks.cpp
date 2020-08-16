#include <bits/stdc++.h>
using namespace std;

int main() {

    int n ;

    cin>>n;

    if(n<1 || n>100)
        return 0;


    int x[n];

    for(int i = 0; i<n ; i++)
        cin>>x[i];

    double sum=0;
    for(int i =0; i<n ; i++) {

        sum = sum + x[i]/(100*1.0);
        }

    double res = (sum /(n * 1.0))*100;

    cout<<setprecision(12)<<res<<endl;


    return 0;







    }
