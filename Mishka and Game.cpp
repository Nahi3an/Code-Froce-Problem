#include <iostream>
using namespace std;

int main() {


    int t;
    cin>>t;

    int m_count=0, c_count=0;
    for(int i=0; i<t; i++) {


        int m,c;
        cin>>m>>c;

        if(m>c) {
            m_count++;
            }
        else if(c>m) {
            c_count++;


            }
        }

    if(m_count>c_count) {

        cout<<"Mishka"<<endl;
        }
    else if(m_count<c_count) {

        cout<<"Chris"<<endl;

        }
    else {

        cout<<"Friendship is magic!^^"<<endl;


        }

    return 0;






    }
