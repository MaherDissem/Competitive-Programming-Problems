#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    map<string,ll> m;
    ll n; cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll ci; cin>>ci;
        string si; cin>>si;
        sort(si.begin(),si.end());
        if(m.count(si)==0) m[si]=ci;
        else m[si]=min(m[si],ci);
    }
    ll ans=1e9;
    if(m.count("A")&&m.count("B")&&m.count("C")) ans=m["A"]+m["B"]+m["C"];
    if(m.count("ABC")) ans=min(ans,m["ABC"]);
    if(m.count("AB")&&m.count("C")) ans=min(ans,m["AB"]+m["C"]);
    if(m.count("A")&&m.count("BC")) ans=min(ans,m["A"]+m["BC"]);
    if(m.count("AC")&&m.count("B")) ans=min(ans,m["AC"]+m["B"]);
    if(m.count("AB")&&m.count("BC")) ans=min(ans,m["AB"]+m["BC"]);
    if(m.count("AC")&&m.count("BC")) ans=min(ans,m["AC"]+m["BC"]);
    if(m.count("AC")&&m.count("AB")) ans=min(ans,m["AC"]+m["AB"]);
    if(ans==1e9) cout<<-1<<'\n';
    else cout<<ans;
}