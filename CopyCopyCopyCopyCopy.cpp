#include <iostream>
#include <set>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;

        set <int> s;

        int num[n];

        for(int i=0; i<n; i++){

            cin>>num[i];
            s.insert(num[i]);


        }



        cout<<s.size()<<endl;
    }






}
