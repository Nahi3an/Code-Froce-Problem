#include <bits/stdc++.h>

using namespace std;

int main() {

    string g,h,str;

    getline(cin,g);
    getline(cin,h);
    getline(cin,str);

    string full = g + h;

    sort(full.begin(),full.end());
    sort(str.begin(),str.end());

    bool flag = 1;
    if(full.length()>str.length()) {

        flag = 0;

        }
    else {

        for(int i=0; i<str.length(); i++) {

            if(full[i]!=str[i]) {

                flag = 0;
                }

            }
        }


    if(flag==1) {

        cout<<"YES"<<endl;
        }
    else {

        cout<<"NO"<<endl;
        }

    }
