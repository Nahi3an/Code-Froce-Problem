#include <iostream>
#include <string>
using namespace std;

int main() {


    string series;
    cin>>series;
    int num[1000];
    for(int i=0; i<series.length(); i++) {
        if(series[i]!='+') {
            for(int j=i+1; j<series.length(); j=j+1) {
            if(series[j]!='+') {
                if(series[i]>series[j]) {


                        swap(series[i],series[j]);
                    }

                }

            }
        }
    }

    cout<<series<<endl;







    return 0;
}
