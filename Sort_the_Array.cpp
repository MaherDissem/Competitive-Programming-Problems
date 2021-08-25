#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll n; cin>>n;
    ll m=n;
    vector<ll> v;
    while(n--)
    {
        ll a; cin>>a;
        v.push_back(a);
    }
    ll l=0,r=0;
    for(ll i=0;i<m-1;i++)
    {
        if(v[i]>v[i+1])
        {
            l=i;
            break;
        }
    }
    for(ll i=m-1;i>0;i--)
    {
        if(v[i]<v[i-1])
        {
            r=i;
            break;
        }
    }
    vector<ll> u(v);
    for(int i=l,j=r; i<=j; i++,j--) swap(v[i],v[j]);
    //for(int i=0;i<m;i++) cout<<v[i]<<" "; cout<<endl;
    int eq=1;
    for (int i=0;i<m-1;i++)
    {
        if(v[i]>v[i+1]) 
        {
            eq=0;
            break;
        }
    }
    if(eq==1)
    {
        cout<<"yes"<<'\n';
        cout<<l+1<<" "<<r+1<<'\n'; 
    }
    else cout<<"no\n";
    return 0;
}