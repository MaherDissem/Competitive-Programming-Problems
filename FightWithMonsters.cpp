#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int points=0;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        h[i]%=(a+b);
        if(h[i]==0) h[i]=a+b;
    }
    sort(h,h+n);
    for(int i=0;i<n;i++)
    {
        if(h[i]<=a)
        {
            points++;
            continue;
        }
        int d=(h[i]-1)/a;
        if(k-d>=0)
        {
            k-=d;
            points++;
        }
        if(k==0) break;
    }
    cout<<points<<'\n';
    return 0;
}