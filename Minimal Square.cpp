#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin>>t;
    int area[t];


    for(int i=0; i<t; i++) {

        int s[2];

        for(int i=0; i<2; i++)
            cin>>s[i];

        sort(s,s+2,greater<int>());

        int x,y;

        if(s[1]*2>=s[0]) {

            y = s[1]*2;

            x = (y-s[0]) + s[0];

            }
        else {

            x = s[0];
            y = s[1] * 2 + ( x - s[1]*2);

            }

        area[i] = x*y;


        }

    for(int i=0; i<t ; i++) {

        cout<<area[i]<<endl;

        }





    return 0;




    }
