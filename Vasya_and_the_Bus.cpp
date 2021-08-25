#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,m,min,max;
    cin>>n>>m;
    if(n==0 && m==0)
        cout<<'0'<<' '<<'0'<<'\n';
    else if(n==0)
        cout<<"Impossible"<<'\n';
    else if(m==0)
    {
        min=n;
        max=n;
        cout<<min<<' '<<max<<'\n';
    }
    else if(n<m)
    {
        max=m-1+n;
        min=m;
        cout<<min<<' '<<max<<'\n';
    }
    else if(n>=m)
    {
        max=n+m-1;
        min=n;
        cout<<min<<' '<<max<<'\n';
    }
    return 0;
}