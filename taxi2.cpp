#include <bits/stdc++.h>
using namespace std;


bool cmp(const int& a,const int& b) {
	return b<a;
}

int main(){
	int n;
	cin>>n;

    if(n<1 || n>100000) return 0;

	int x[n];

	for(int i = 0;i < n;i++){
        cin>>x[i];

         if(x[i]<1 || x[i]>4) {

            return 0;

            }

	}


	sort(x,x+n,cmp);


	int ans = 0;

	for(int i = 0;i < n;i++){
		int sum = x[i] + x[n-1];

		if(sum <= 4)
		{
			ans++;
			n--;
			while(sum + x[n-1] <= 4)
			{
				n--;
                sum = sum + x[n-1];
			}
		}
		 else ans++;
	}


	cout<<ans<<endl;
	return 0;
}
