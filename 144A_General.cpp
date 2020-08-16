#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int x[n];

for(int i = 0; i<n; i++){

    cin>>x[i];

}

int max = x[0], min = x[0], i_max=0, i_min = 0;

for(int i=0; i<n; i++){

    if(max<x[i]){

     i_max = i;
     max = x[i];

    }

    if(min>=x[i]){

    i_min = i;
    min = x[i];

    }
}

int res = abs((n-1)-i_min) + abs(0-i_max);

if(i_max>i_min){

    res --;
}
cout<<res<<endl;



}
