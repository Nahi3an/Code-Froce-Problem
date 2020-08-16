#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(!n>=1 and !n<=100)
    return 0;

//int points[n][n];
int sumx=0,sumy=0,sumz=0;
for(int i=0;i<n;i++){

    int x,y,z;
    cin>>x>>y>>z;
    sumx+=x;
    sumy+=y;
    sumz+=z;
        //cin>>points[i][j];
       // sum+=points[i][j];

    }

//cout<<sumx<<sumy<<sumz<<endl;
int sum=sumx!=0 or sumy!=0 or sumz!=0 ?1:0;
if(sum!=0)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;





//        cin>>points[i][j]

}
