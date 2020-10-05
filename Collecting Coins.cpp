#include <iostream>

using namespace std;

int main(){



    int t;
    cin>>t;

    int res[t];

    for(int i=0; i<t; i++){

    int a,b,c,n;
    cin>>a>>b>>c>>n;

    int s = a+b+c+n;

    int mx = max(a,max(b,c));

    if(s%3==0 && s/3>=mx){

        cout<<"YES"<<endl;

    }else{

        cout<<"NO"<<endl;

    }


    }


    return 0;








}
