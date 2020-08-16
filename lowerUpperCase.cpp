#include <iostream>
#include <string>
using namespace std;

int main() {


    string s;
    cin>>s;

    if(s.length()>100) {

        return 0;
    }


    int low=0, up=0;
    for(int i=0; i<s.length(); i++) {

        if(s[i]>=65 && s[i]<=90) {

            up++;

        } else if(s[i]>=97 && s[i]<=122) {

            low++;
        }
    }


    if(up>low) {

        for(int i=0; i<s.length(); i++) {

            if(s[i]>=97 && s[i]<=122) {

                s[i] = s[i] - 32;

            }

        }

    } else if(low>=up) {

        for(int i=0; i<s.length(); i++) {
            if(s[i]>=65 && s[i]<=90) {

                s[i] = s[i] + 32;

            }
        }

    }

    cout<<s<<endl;
    return 0;

}
