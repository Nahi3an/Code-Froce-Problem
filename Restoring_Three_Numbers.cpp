#include <bits/stdc++.h>
using namespace std;

int main(){

int num[4];

for(int i=0; i<4; i++) cin>>num[i];

sort(num,num+4);

int n1, n2, n3;

n1 = num[3] - num[2];

n2 = num[3] - num[0];

n3 = num[3] - (n1+n2);

cout<<n1<<" "<<n2<<" "<<n3<<endl;

return 0;








}
