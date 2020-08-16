#include<iostream>
using namespace std;
void capslock(void );
int main()
{
    capslock();
    //cout<<(char)toupper('A')<<endl;
}
void capslock()
{
    string word;
    cin>>word;
    int upercaseCounter=0;
    bool change=false;
    for(int i=0; i<word.size(); i++)
    {
        if(word[i]>='A' and word[i]<='Z')
            upercaseCounter++;
    }

    if(word.size()==upercaseCounter or ((word[0]>='a' and word[0]<='z') and upercaseCounter==word.size()-1) )
    {
        change=true;
    }
    if(change)
    {

        for(int i=0; i<word.size(); i++)
        {

            if(i==0 and word.size()!=upercaseCounter)
                word[i]= toupper(word[i]) ;
            else
                word[i]=tolower(word[i]);
        }
    }


    cout<<word<<endl;
}


void whoGiveWho()
{
    int n;
    cin>>n;
    int friends[n];
    int giftGivenTo[n];
    for(int i=1; i<=n; i++)
    {
        cin>>friends[i];
        giftGivenTo[friends[i]]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<giftGivenTo[i]<<" ";
    }
    cout<<endl;
}
