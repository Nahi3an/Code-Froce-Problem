#include<iostream>
using namespace std;
int main(){

    int n;
    bool pargram=false;

    cin>>n;
    int arr[53]={0};//init all is zero

    char str[n];
    cin>>str;
    for(int i=0;i<n;i++){
        int alphabet= str[i];

        if(alphabet>=97){
            arr[alphabet-97]=1;
            arr[(alphabet-97)+26]=1; // for a,b... upper to lower case A,B....
        }
        else{
            arr[(alphabet-65)+26]=1;
            arr[(alphabet+32)-97]=1;// for A,B... convert to lower case  a,b...
        }

    }
    int totalnum=0;
    for(int i=0;i<53;i++){
        if(arr[i])
            totalnum++;
    }

    if(totalnum==52)
        pargram=true;



    if(pargram)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
