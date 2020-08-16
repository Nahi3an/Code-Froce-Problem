#include<bits/stdc++.h>
using namespace std;
int main(){
int n,volume,totalvolume=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>volume;
    totalvolume+=volume;
}
double percentageOForangejuice=((double)totalvolume/(n*100))*100;

cout<<fixed<<setprecision(12)<<percentageOForangejuice<<endl;

}


