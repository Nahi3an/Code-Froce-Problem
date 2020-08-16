#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[4],temp[4];

    for(int i=0; i<4; i++) {

        cin>>x[i];
        temp[i] = -1;

        }

    sort(x,x+4);



    int j = 0;
    for(int i = 0; i<4-1 ; i++){

    if(x[i]==x[i+1]){

        temp[j] = x[i];
    }

    j++;

    }

    int c = 0;

    for(int i = 0; i<4 ; i++){
    if(temp[i]!=-1){

        c ++;
    }

    }

    cout<<c<<endl;

    return 0;
    }
