#include <iostream>
using namespace std;


int main(){

 int n;
 cin>>n;

 int x[n];

  for(int i=0; i<n; i++){

    cin>>x[i];
  }

  int sum =0,c=0;

  for(int i=0;i<n; i++){

    if(x[i]>0){

        sum = sum+ x[i];
    }
    else{

      if(sum<=0){

        c++;
      }
      else if(sum>0){

        sum--;
      }

    }

  }

  cout<<c<<endl;

  return 0;

}









