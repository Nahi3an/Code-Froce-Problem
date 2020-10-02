#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    int arr[t];

    int i=0;
    while(i<t)
    {

        long int n,m;

        cin>>n>>m;

        if(n==1)
        {

            arr[i] = 0;

        }
        else if(n==2)
        {

            arr[i] = m;


        }
        else
        {

            long int p,q;

            p = m-1;
            q = m -p;

            arr[i]=(p*2) + (q*2);



        }

        i++;

    }

    for(int i=0; i<t; i++){

        cout<<arr[i]<<endl;
    }

    return 0;





}
