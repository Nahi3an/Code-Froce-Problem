#include <iostream>

using namespace std;


int main(){


    int k,l,m,n,d;

    cin>>k>>l>>m>>n>>d;

    /*if((k<1 || k>10)||(l<1 || l>10)||(m<1 || m>10)||(n<1 || n>10))
        return 0;*/


    int res = 0, count = 0;;

    if(k>d || l>d || m>d || n>d){

     res = 0;

    }else{

    int x[d+2];

    for(int i=1; i<=d; i++){

        x[i] = 0;
    }

    for(int i=k; i<=d; i=i+k){


        x[i] = -1;
    }

    for(int i=l; i<=d; i=i+l){


         x[i] = -1;




    }

    for(int i=m; i<=d; i=i+m){


        x[i] = -1;

    }

    for(int i=n; i<=d; i=i+n){


        x[i] = -1;

    }



    for(int i = 1; i<=d; i++){

    if(x[i]==0){

        count ++;

    }

    }

    res = d - count ;

    }




    cout<<res<<endl;



}
