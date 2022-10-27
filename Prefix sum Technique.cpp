#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* prefix sum technique
    a[5]={1,2,3,4,5};
    prefix[5]={1,3,6,10,15};
    if l=1 and r=3
       then output 9
    if l=0 and l=4
    output 10
     */
    int n;
    cin>>n;
    int a[n];
    int prefix[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    prefix[0]=a[0];
    /*
    By this loop,we will accomplish a task so that each element of prefix array is
    equal to the total sum of previous all element.
    */
    for(int i=1;i<10;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
    cout<<"Enter the number of Query=";
    int q;
    cin>>q;
    /*
    By this loop, we will determine summation between the range l and r.
    */
    for(int i=0;i<q;i++)
    {
       int l,r;
       cout<<"Enter Range="<<endl;
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
