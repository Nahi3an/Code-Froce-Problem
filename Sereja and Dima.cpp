#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    int cards[n];

    for(int i=0; i<n; i++) cin>>cards[i];


    //sort(cards,cards+n,greater<int>());

    for(int i=0; i<n; i++)
    {

        cout<<cards[i]<<" ";

    }
    cout<<endl;
    int s =0,d= 0;
    int j = n-1;
    int k = 0;
    int a = cards[k];
    int b = cards[j];
    int i =0;
    for( i=0; i<n; i++)
    {


        int mx = max(a,b);

        if(mx==a)
        {

            k=k+1;
            a=cards[k];

        }
        else if(mx == b)
        {

            j = j-1;
            b = cards[j];



        }

        if(i%2==0)
        {

            s=s+mx;
        }
        else
        {
            d=d+mx;
        }






        //cout<<mx<<endl;

    }
    //cout<<cards[k]<<endl;

    cout<<s<<" "<<d<<endl;




    return 0;



}
