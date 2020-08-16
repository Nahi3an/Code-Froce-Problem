#include<bits/stdc++.h>
/*A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?*/
using namespace std;
int main(){
int k,n,w;
//k=initila banana cost
//n=money the solder has
//w = how may he wants
cin>>k>>n>>w;
if(!w>=1 and !w<=1000)
    return 0;
int total=0;
for(int i=1;i<=w;i++){
    total+=(k*i);
}
if(total>n)
    cout<<total-n<<endl;
else
    cout<<"0"<<endl;

}
