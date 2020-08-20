#include <iostream>
using namespace std;
int main(){
int n,x = 4,y;

cin>>n;

if(n%2==0){
    y = n - x;

}else{
    int i = 0;
    while(i<n){
     y = n - x;
        if(y%3==0){
            break;
        }
        else{
            x = x+2;
        }
        i++;
    }
}

cout<<x<<" "<<y<<endl;

return 0;





}
