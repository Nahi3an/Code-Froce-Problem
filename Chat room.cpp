/*
*/

#include<iostream>
using namespace std;
int main()
{
    char word[100];
    cin>>word;
    int c=0,x=0;

    for(int i=0; word[i]!=NULL; i++)
    {
        if(word[i]==word[i+1])
        {
            c++;

        }
        else
        {
            if(c!=0)
            {
                x++;
                if(c>1)
                    x++;

                c=0;
            }
        }
    }
    if(x>1)
    {
        cout<<"YES"<<endl;
        //wrong word
    }
    else
        cout<<"NO"<<endl;
        //current word
}
