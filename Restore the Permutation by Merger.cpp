#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

int t;
cin>>t;

vector <int> num[t];

int p =0;
while(p<t){

    int n;
    cin>>n;



    set <int> s;

    int arr[2*n];

    for(int i=0; i<2*n; i++){

       cin>>arr[i];
    }

    for(int i=0; i<2*n; i++){

        int j ;
        for(j=0; j<i; j++){

            if(arr[i]==arr[j]){
                break;
            }

            }

            if(i==j){

               // cout<<arr[i]<<" ";
                num[p].push_back(arr[i]);
            }


    }
    //cout<<endl;

        p++;


}

//cout<<"RRRRR"<<endl;
for(int i=0; i<t; i++){

    for(auto j=num[i].begin(); j!= num[i].end(); j++){

        cout<<*j<<" ";
    }
    cout<<endl;
}







}
