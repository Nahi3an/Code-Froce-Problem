#include <bits/stdc++.h>
using namespace std;
int main(){

int r,b;


cin>>r>>b;

int diff,same;

if(r==b){

    diff = r;
    same = r - b;

}else{

  if(r>b){

    diff = b;

  }else{

    diff = r;
  }

   same = abs(r-b) / 2;
}

cout<<diff<<" "<<same<<endl;
return 0;


}
