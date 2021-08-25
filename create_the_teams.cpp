#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define rep(i,n) for(ll i=0;i<n;i++)
int main()
{
    ios
    ll t;cin>>t;
    while(t--)
    {
        ll n,x; cin>>n>>x;
        vector<ll> a;
        rep(i,n){
            ll ai; cin>>ai;
            a.push_back(ai);
        }
        sort(a.begin(),a.end());
        ll nbr=1,res=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(nbr*a[i]>=x)
            {
                res++;
                nbr=0;
            }
            nbr++;
        }
        cout<<res<<'\n';
    }
    return 0;
}