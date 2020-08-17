
#include <bits/stdc++.h>

using namespace std;

int main(){

char s[10002],m,n;

cin>>n;
int j = 0;
while((int)m!=125){

  cin>>s[j];

  if(s[j]=='}'){
    s[j]=0;
    break;
  }

  cin>>m;

  j++;
}

int count = 0;

if(j==0){

    cout<<count<<endl;

    return 0;
}


sort(s,s+j);

char temp[j];

for(int i =0; i<j; i++){

    temp[i]='$';

}

int k = 0;

for(int i = 0; i<j ; i++){

    if(s[i]!=s[i+1]){

        temp[k] = s[i];
    }

    k++;

}

for(int i = 0; i<k; i++){

   if(temp[i]!='$')
    count++;

}

cout<<count<<endl;


return 0;
}
