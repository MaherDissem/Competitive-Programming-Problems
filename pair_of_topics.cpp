#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ll n; cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll a; cin>>a;
        v.push_back(a);
    }
    int flag=0;
    for(ll j=0;j<n;j++)
    {
        ll b; cin>>b;
        v[j]-=b;
        if(v[j]>0) flag=1;
    }
    if(flag==0){
        cout<<0;
        return 0;
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll l=0,r=n-1;
    while(l<r)
    {
        while(v[l]+v[r]<=0) l++;
        if(l>=r) break;
        ans+=(ll)r-l;
        r--;
    }
    cout<<ans;
    return 0;
}