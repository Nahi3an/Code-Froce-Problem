#include <iostream>
using namespace std;

int main(){

    int emp;
    cin>>emp;

    int count=0;
    for(int i=1; i<emp; i++){

        int team_member = emp- i;

        if(i>team_member){

            break;
        }

        if(team_member%i==0){

            count ++;

        }
    }

    cout<<count<<endl;
    return 0;




}
