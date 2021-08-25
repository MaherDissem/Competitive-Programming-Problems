#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll n;
    cin>>n;
    ll n0=n;
    vector<ll> v;
    ll s=0;
    vector<ll> sums1;sums1.push_back(0);
    vector<ll> sums2;sums2.push_back(0);
    while(n--)
    {
        ll a;
        cin>>a;
        s+=a;
        sums1.push_back(s);
        v.push_back(a);
    }
    vector<ll> u(v);
    sort(u.begin(),u.end());
    s=0;
    for(ll i=0;i<n0;i++)
    {
        s+=u[i];
        sums2.push_back(s);
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<sums1[r]-sums1[l-1]<<'\n';
        }
        if(type==2)
        {
            cout<<sums2[r]-sums2[l-1]<<'\n';
        }
    }
    return 0;
}

