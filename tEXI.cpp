/**
After the lessons n groups of schoolchildren went outside
 and decided to visit Polycarpus to celebrate his birthday.
  We know that the i-th group consists of s i friends
  (1 ≤ s i ≤ 4), and they want to go to Polycarpus together.
They decided to get there by taxi. Each car can carry at most
four passengers. What minimum number of cars will the children need if all members of
each group should ride in the same taxi (but one taxi can take more than one group)?

*/

#include<iostream>
#include<cmath>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int s;
    int g=0,totalTexi=1;
    int grr[5]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>s;
        grr[s]+=1;
    }
   /* for(int i=1; i<5; i++)
    {
        cout<<i<<" "<<grr[i]<<endl;

    }*/


while(grr[3]-1>=0 and grr[1]-1>=0)
{
        grr[1]--;
        grr[3]--;
        grr[4]++;
      //  cout<<"in 3 g"<<endl;
}
while(grr[2]){
    if(grr[2]-2>=0){
        grr[2]-=2;
        grr[4]++;
    }else if(grr[2]-1>=0 and grr[1]-1>=0){
        ///so one taxi got 2member then another one member add to this
        grr[1]--;
        ///if another single group member is avalible then add to this grp

        if(grr[1]-1>=0){
            grr[1]--;
        }
        break;
    }else{
    break;
    }
    //cout<<"in 2s "<<endl;
}
///at this pint all the group then contain single member are avalible
int num=0;
if(grr[1]){
num= ceil((float)grr[1]/4.0);
}



cout<<grr[4]+grr[2]+num+grr[3]<<endl;

}

