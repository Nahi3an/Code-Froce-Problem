#include <bits/stdc++.h>
using namespace std;

int main(){


int n;
cin>>n;
string str[n];

for(int i=0; i<n; i++){

    cin>>str[i];

}

int sum = 0;
for(int i=0; i<n; i++){

    if(str[i]=="Tetrahedron") sum = sum + 4;

    if(str[i]=="Cube") sum = sum + 6;

    if(str[i]=="Octahedron") sum = sum + 8;

    if(str[i]=="Dodecahedron") sum = sum + 12;

    if(str[i]=="Icosahedron") sum = sum + 20;


}

cout<<sum<<endl;

return 0;



}
