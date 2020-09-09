#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int member[n];

    for(int i=0; i<n; i++){

        cin>>member[i];
    }


    sort(member, member+n);

    int a = (n/3);
    int c = a *3;

    // 2000/ 3 = 666 ... 666*3
    int arr[c],count = 0;
    for(int i=0; i<c; i++){

    arr[i] = member[i];

    }

    for(int i=0; i<c; i=i+3){

    int j = i,t[3];
    for(int p=0; p<3; p++){

    if(arr[j]<=5){

        t[p] = arr[j];
    }
    j++;

    }

    bool flag = true;
    for(int p=0; p<3; p++){

    t[p] = t[p]+k;

    if(t[p]>5){

    flag = false;
    break;

    }

    }

    if(flag){

        count++;

    }else{

        count = count + 0;
    }




    }

    cout<<count<<endl;







    }









