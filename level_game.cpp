#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    if(n<1||n>100) return 0;

    int x[n],f[n];
    for(int i=0; i<n; i++) {

        x[i] = i+1;
        f[i] = -1;
        }

    int p;

    cin>>p;

    if(p<0 || p>n) return 0;

    int y[p];

    for(int i=0; i<p; i++) {

        cin>>y[i];
        }

    int q;
    cin>>q;

    if(q<0 || q>n) return 0;

    int z[q];

    for(int i=0; i<q; i++) {

        cin>>z[i];
        }


    sort(y,y+p);
    sort(z,z+q);


    /*cout<<endl;
    cout<<endl;

    for(int i=0; i<p; i++) {

        cout<<y[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    for(int i=0; i<q; i++) {

        cout<<z[i]<<" ";

    }

    cout<<endl;
    cout<<endl;*/


    if(p!=0){

    for(int i=0; i<n; i++) {
        int c=0;
        for(int j=0; j<p; j++) {

            if(x[i]!=y[j]) {

                c++;

                }

            }

        if(c==p) {

            f[i] = x[i];

            }


        }

    }

    /*cout<<endl;
    cout<<endl;

    for(int i=0; i<n; i++) {

        cout<<f[i]<<" ";

    }

    cout<<endl;
    cout<<endl;*/

    int flag = 0;

    if(q!=0){
    for(int i=0; i<n; i++){

        int count = 0;
        if(f[i]!=-1){
        for(int j=0; j<q; j++){

            if(f[i]!=z[j]){

                count++;
            }
        }
        }


        if(count==q){

            //cout<<f[i];
            flag = 1;
            break;
        }
    }

    }


    if((flag==1)||(p==0 && q==0)){

        cout<<"Oh, my keyboard!"<<endl;

        }
    else if(flag==0){

        cout<<"I become the guy."<<endl;
        }

        return 0;



    }
