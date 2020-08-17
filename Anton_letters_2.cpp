#include <bits/stdc++.h>
using namespace std;

int main(){

string input;

getline(cin,input);

string s[input.length()], temp[input.length()];

int k = 0;
for(int i= 0; i<input.length(); i++){

   if(input[i]>=97&&input[i]<=122){
    s[k] = input[i];
    k++;
   }


}

sort(s,s+k);

int j =0;
for(int i= 0; i<k; i++){

  if(s[i]!=s[i+1]){

    temp[j] = s[i];
    j++;

  }
}


cout<<j<<endl;

return 0;

}
