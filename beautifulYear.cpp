#include <bits/stdc++.h>
using namespace std;


int main() {

    int y;

    cin>>y;

    if(y<1000 || y>9000) {
        return 0;
        }

    string str2;

    int k = 0;

    while(k==0) {

               y++;
        string str = to_string(y);

        int sum = 0;
        for(int i = 0; i<4; i++){

        for(int j = 0; j<4 ; j++){

            if(str[i]!=str[j] && i!=j){

               sum++;

            }
        }

        }

        if(sum==12){

            str2 = str;

            break;
        }



        }

        cout<<str2<<endl;

    return 0;

    }




