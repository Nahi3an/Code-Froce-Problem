#include <iostream>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink = k*l;

    int toast_by_drink = total_drink/nl;

    int total_slice = c*d;

    int toast_by_salt = p/np;

    int toast = min(toast_by_drink,min(total_slice,toast_by_salt))/n;

    cout<<toast;











}
