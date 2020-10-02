#include <iostream>

using namespace std;

int main()
{


    int n;
    cin>>n;

    int k = n/2;

    int arr[k];


    for(int i=0; i<k ; i++)
    {
        if(n%2==0)
        {

            arr[i]=2;

        }

        else if(n%2!=0)
        {

            if(i==k-1)
            {

                arr[i]=3;

            }
            else
            {

                arr[i] = 2;

            }

        }

    }



    cout<<k<<endl;

    for(int i=0; i<k ; i++)
    {

        cout<<arr[i]<<" ";
    }

    return 0;




}
