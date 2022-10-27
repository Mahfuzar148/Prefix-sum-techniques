#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int prefix[10];
    prefix[0]=a[0];
    for(int i=1;i<10;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
    int q=5;
    for(int i=0;i<q;i++)
    {
       int l,r;
       cin>>l>>r;
       if(l==0)
       {
           cout<<prefix[r]<<endl;
       }
       else
       {
           cout<<prefix[r]-prefix[l-1];
       }
    }
    return 0;
}
