#include<bits/stdc++.h>
using namespace std;
typedef struct uniform{
int home,guest;
}uniform;
int main(){

int n;
cin>>n;
uniform team[n];
for(int i=0;i<n;i++){
    cin>>team[i].home;
    cin>>team[i].guest;
}
int c=0;
for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(i!=j){
            if(team[i].home==team[j].guest){
                c++;
            }
        }
       }

}
cout<<c<<endl;


}
