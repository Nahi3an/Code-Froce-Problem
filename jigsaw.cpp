#include <bits/stdc++.h>

using namespace std;

bool cmp(const int& a,const int& b){

    return a<b;
}
int main(){


    int n,m;
    cin>>n>>m;

    if((n<2 || n>50)||(m<2 || m>50)) return 0;

    int x[m],y[m];

    for(int i =0 ;i<m; i++){

        cin>>x[i];
        y[i] = -1;
    }


    sort(x+0,x+m, cmp);



    int p =0, q =n-1,i =0;
    while(q<m){

    y[i] = x[q]-x[p];

    q++;
    p++;
    i++;


    }

    int min = y[0];
    for(int i =0 ;i<m; i++){


    if(y[i]!=-1 && min>y[i]){

        min = y[i];
    }

    }

    cout<<min<<endl;


    return 0;






}
