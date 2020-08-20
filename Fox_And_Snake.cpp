#include <iostream>
using namespace std;

int main() {

    int r,c;

    cin>>r>>c;

    int f = 0;
    for(int i=1; i<=r; i++) {

        if(i%2==0) {
            if(f==0) {
                for(int j=1; j<=c-1; j++) {

                    cout<<".";
                    }
                cout<<"#";

                f = 1;

                }
            else if(f==1) {

                cout<<"#";

                for(int j=1; j<=c-1; j++) {

                    cout<<".";
                    }
                f =0;

                }
            }
        else {
            for(int j=1; j<=c; j++) {

                cout<<"#";

                }
            }

        cout<<endl;



        }
    }
