/*

During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen.
 However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.
*/

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>n>>t;
    char queu[n];
    cin>>queu;
    queue<char> boys;

    for(int i=0; queu[i]!=NULL; i++)
    {
        if(queu[i]=='B')
        {
            boys.push(i);
//        int c=i;
//        int skip=0;
//        for(int j=c+1;j<=c+t;j++){
//            if(queu[j]=='G'){
//
//                queu[j]='B';
//                queu[i]='G';
//
//                i=j;
//
//            }
//
//        }
            //i=c;
        }
    }
    while(!boys.empty()){
        int i=boys.front();
        int c=i;
        boys.pop();
        for(int j=c+1;j<=c+t;j++){
            if(queu[j]=='G'){

                queu[j]='B';
                queu[i]='G';

                i=j;

            }
    }
    }

    cout<<queu<<endl;
}
