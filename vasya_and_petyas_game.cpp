#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll n; cin>>n;
    // sieve's algorithm
    vector<ll> primes(n+1,1),ans;
    primes[0]=primes[1]=0;
    for(ll i=2;i<=sqrt(n);i++)
        if(primes[i])
            for(ll j=i*i;j<=n;j+=i)
                primes[j]=0;
    for(ll i=2;i<=n;i++)
    {
        if(primes[i])
        {
            ll a=1;
            while(a<=n/i)
            {
                a*=i;
                ans.push_back(a);
            }
        }
    }

    cout<<ans.size()<<'\n';
    for(auto i:ans) cout<<i<<' '; cout<<'\n';
    return 0;
}