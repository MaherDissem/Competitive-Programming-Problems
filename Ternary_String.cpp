#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        ll n=s.size();
        ll a=-1, b=-1, c=-1;
        ll ans=200002;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1') a=i;
            else if(s[i]=='2') b=i;
            else if(s[i]=='3') c=i;
            if(a!=-1 && b!=-1 && c!=-1) ans=min(ans, i+1-min(a,min(b,c)));
            //printf("|%d %d %d|\n",a,b,c);            
        }
        if(ans==200002) cout<<0<<'\n';
        else
        cout<<ans<<'\n';
    }
    return 0;
}