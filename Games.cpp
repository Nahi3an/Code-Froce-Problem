#include <iostream>
using namespace std;

struct jerseys{

    int h, g;


};


int main(){


int n;
cin>>n;

jerseys jersy[n];

for(int i=0; i<n; i++){

    cin>>jersy[i].h>>jersy[i].g;

}


int count = 0;
for(int i = 0; i<n; i++){

    for(int j=0; j<n; j++){

       if(i==j){

        continue;
       }

       if(jersy[i].h==jersy[j].g){

        count++;

       }
    }
}

cout<<count<<endl;

return 0;





}
