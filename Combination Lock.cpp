#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    char state[n], comb[n];

    int st[n],com[n];

    for(int i=0; i<n; i++)
    {

        cin>>state[i];


        if(state[i]=='0')
        {

            st[i] = 0;

        }
        else if(state[i]=='1')
        {

            st[i] = 1;


        }
        else if(state[i]=='2')
        {


            st[i] = 2;

        }
        else if(state[i]=='3')
        {


            st[i] = 3;


        }
        else if(state[i]=='4')
        {


            st[i] = 4;

        }
        else if(state[i]=='5')
        {


            st[i] = 5;


        }
        else if(state[i]=='6')
        {


            st[i] = 6;

        }
        else if(state[i]=='7')
        {

            st[i] = 7;


        }
        else if(state[i]=='8')
        {


            st[i] = 8;

        }
        else if(state[i]=='9')
        {



            st[i] = 9;

        }



    }


    for(int i=0; i<n; i++)
    {

        cin>>comb[i];


        if(comb[i]=='0')
        {

            com[i] = 0;

        }
        else if(comb[i]=='1')
        {

            com[i] = 1;


        }
        else if( comb[i]=='2')
        {


            com[i] = 2;

        }
        else if(comb[i]=='3')
        {


            com[i] = 3;


        }
        else if(comb[i]=='4')
        {


            com[i] = 4;

        }
        else if(comb[i]=='5')
        {


            com[i] = 5;


        }
        else if(comb[i]=='6')
        {


            com[i] = 6;

        }
        else if(comb[i]=='7')
        {

            com[i] = 7;


        }
        else if(comb[i]=='8')
        {


            com[i] = 8;

        }
        else if(comb[i]=='9')
        {



            com[i] = 9;

        }



    }

    int c =0;
    for(int i=0; i<n; i++)
    {


        //cout<<st[i]<<" "<<com[i]<<endl;

        int diff_1 = abs(st[i]-com[i]);
        int diff_2 = 10 - diff_1;

        //cout<<diff_1<<" "<<diff_2<<endl;

        if(diff_1>=diff_2){

            c= c+ diff_2;


        }else{


            c = c+ diff_1;
        }


    }


    cout<<c<<endl;
    return 0;

}







