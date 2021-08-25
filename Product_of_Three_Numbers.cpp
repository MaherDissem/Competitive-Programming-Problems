#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a=2;
        int flag=0;
        while(flag==0 && a*a*a<=n)
        {
            if(n%a==0)
            {            
                ll b=a+1;
                ll x=n/a;
                while(flag==0 && b<sqrt(x))
                {
                    if(x%b==0)
                    {
                        ll c=x/b;
                        if(b<c) cout<<"YES\n"<<a<<" "<<b<<" "<<c<<'\n';
                        flag=1;
                    }
                    b++;
                }
            }
            a++;
        }
        if(flag==0) cout<<"NO\n";
    }
    return 0;
}
