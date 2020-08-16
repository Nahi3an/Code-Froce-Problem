#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    if(n<1 || n>100)
        return 0;


    string str = "I hate ";



    if(n == 1) {

        str = "I hate ";


        }

    else {

        for(int i = 2; i<=n; i++) {

            if(i%2!=0) {


                str = str + "that I hate ";

                }
            else if(i%2==0) {

                str = str + "that I love ";

                }

            }


        }




    str = str + "it";

    cout<<str<<endl;




    return 0;


    }
