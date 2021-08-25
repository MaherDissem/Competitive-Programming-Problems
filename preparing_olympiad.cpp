#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<ll> difficulty;
    for(ll i=0;i<n;i++){
        ll ci; cin>>ci;
        difficulty.push_back(ci);
    }
    ll m=pow(2,n);
    ll v[m][3]; // min max tot
    for(ll i=0;i<m;i++)
    {
        v[i][0]=1e9;
        v[i][1]=0;
        v[i][2]=0;
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i & 1ll<<j)
            {
                if(v[i][0]>difficulty[j]) v[i][0]=difficulty[j];
                if(v[i][1]<difficulty[j]) v[i][1]=difficulty[j];
                v[i][2]+=difficulty[j];
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
        if(v[i][2]>=l && v[i][2]<=r && v[i][1]-v[i][0]>=x) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}