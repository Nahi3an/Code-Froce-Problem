#include <bits/stdc++.h>
using namespace std;

/*struct roommate {

    int p,h;

    }; */

int main() {

    int n;
    cin>>n;

    if(n<1 || n>100)
        return 0;

    //roommate x[n];

    int p[n],h[n];

    for(int i=0; i<n; i++) {
        /*cin>>x[i].p;
        cin>>x[i].h;*/


       /* if((x[i].p<0||x[i].p>100)||(x[i].h<0||x[i].h>100)) {
            return 0;
            }*/

        cin>>p[i]>>h[i];

        if((p[i]<0||p[i]>100)||(h[i]<0||h[i]>100)) {
            return 0;
            }

        }

    int count = 0;
    for(int i=0; i<n; i++) {

       // int sum = x[i].h - x[i].p;
        int sum = h[i] - p[i];


        if(sum>=2) {

            count++;
            }
        }

    cout<<count<<endl;

    return 0;


    }
