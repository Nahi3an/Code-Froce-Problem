#include<bits/stdc++.h>
#define null NULL
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;


    map<char,int> chars;

    /**map the frequency of each charter in s1 and s2*/

    for(int i=0; i<s1.size(); i++)
    {
        if(chars[s1[i]]!=NULL)
        {
            chars[s1[i]]+=1;
        }
        else
        {
            chars[s1[i]]=1 ;
        }
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(chars[s2[i]]!=NULL)
        {
            chars[s2[i]]+=1;
        }
        else
        {
            chars[s2[i]]=1 ;
            //chars.insert({s2[i],1});
        }
    }
    bool makesTheName=true;

    /*for(auto itr=chars.begin() ; itr!=chars.end();itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }*/

    for(int i=0; i<s3.size(); i++)
    {
        /* decrease the frequency  value of each charter  */

        /*try{
         chars.at(chars[s3[i]])--;
        }catch(exception e){
            continue;
        }*/
        chars[s3[i]]--;

        /*for(auto itr=chars.begin() ; itr!=chars.end(); itr++)
        {
            if(itr->first==s3[i])
            {
             //   cout<<itr->first<<" == "<<s3[i]<<endl;

                chars[s3[i]]--;
                break;
            }
        }*/
    }
    for(auto itr=chars.begin() ; itr!=chars.end(); itr++)
        {
        if(itr->second <0 or itr->second >0 )
        {

            //cout<<s3[i]<<" "<<chars[s3[i]]<<endl;
            makesTheName=false;
            break;
        }

    }


    if(makesTheName)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}
