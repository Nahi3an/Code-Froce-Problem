#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	long int a[t],b[t];

	for(int i=0; i<t; i++){

		cin>>a[i]>>b[i];
	}


	for(int i=0; i<t; i++){


		long int diff = abs(a[i]-b[i]);

		long int c = 0;
		if(diff%10==0){

			c = diff/10;

		}else if(diff%10!=0){

			c = diff/10;

			c++;


		}

		cout<<c<<endl;
	}

        return 0;



}
