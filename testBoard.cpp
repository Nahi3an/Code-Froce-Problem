#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

/*int main(){

int n,m1;
cin>>n;
int res = 0;

while(n!=0){

    m = n%10;
    n = n/10;

    res = res + m;

}

cout<<res<<endl;

return 0;








}*/


/*

int main() {

     int n,m,sum=0;
    scanf("%d", &n);

   while(n>10){

    m =  n%10;
    n = n/10;

    sum = sum + m;

   }



   if(n%10!=0){
    sum = sum + (n%10);
   }

   sum = sum + (n/10);

   printf("%d", sum);



    return 0;
}
*/


#include <stdio.h>

int main(){
    int arr[1005],n,l,y[1005];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
        y[i] = -1;

    }
    scanf("%d",&l);

    int count=0, sum=0,j = 0;
    for(int i=0; i<n; i++){


    if(arr[i]>=l){

            continue;

    }
    else{

       sum = sum + arr[i];
       count++;

       if(sum==l){

       y[i] = count;
       count = 0;
       sum = 0;

       }

    }

    }

    int max = y[0];
    for(int i= 0; i<n; i++){

    if(y[i]>max){

        max = y[i];
    }

    }

    cout<<max<<endl;

    return 0;
}

