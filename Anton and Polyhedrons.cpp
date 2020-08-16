#include<iostream>
using namespace std;
int main(){

string polyhedrons[5]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
int polyFaces[5]={4,6,8,12,20};
int n;
cin>>n;
int totalfaces=0;
for(int i=0;i<n;i++){
    string poly;
    cin>>poly;
    int idx=-1;
    for(int i=0;i<5;i++){
        if(poly==polyhedrons[i])
            idx=i;
    }
    totalfaces+=polyFaces[idx];
}
cout<<totalfaces<<endl;
}
