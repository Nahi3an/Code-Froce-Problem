#include <bits/stdc++.h>
using namespace std;

int main(){


int dis[3];

for(int i=0; i<3; i++){

    cin>>dis[i];
}


sort(dis,dis+3);


 int res;

 res = dis[1]-dis[0];
 res = res + (dis[2]-dis[1]);

 cout<<res<<endl;

 return 0;






}
