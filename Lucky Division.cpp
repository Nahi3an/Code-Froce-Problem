/**

Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
int luckynum[]={4,7,47,744};
int num;
cin>>num;

bool found=false;
for(int i=0;i<3;i++){
    if(num%luckynum[i]==0){
    found=true;
    break;

    }
}
if(!found){

    while(num){
        int n=num%10;
        //cout<<n<<endl;
        if(!(n==4 or n==7)){
            found=false;
            break;
        }
        num/=10;
    }
    if(num==0)
        found=true;
}
if(!found)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;

return 0;

}
