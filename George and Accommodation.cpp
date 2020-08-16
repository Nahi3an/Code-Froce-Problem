/**

George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has p i people living in it and the room can accommodate q i people in total ( p i ≤ q i). Your task is to count how many rooms has free place for both George and Alex.
*/

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
while(n){
        int p,q;
    cin>>p>>q;
    if(p>=0 and p<=q-2){
        c++;
    }
    n--;
}
cout<<c<<endl;
}


/**
3
1 1
2 2
3 3


output
0



*/
