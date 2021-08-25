#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
ll prod(vector<ll> v)
{
    ll p=1;
    for(ll i=0;i<v.size();i++) p*=v[i];
    return p;
}
int main()
{
    ll k; cin>>k;
    string str="codeforces";
    vector<ll> v(10,1);
    ll i=0; ll p=1;
    while(p<k)
    {
        p/=v[i];
        v[i]++;
        p*=v[i];
        i++;
        if(i==10) i=0;
    }
    for(ll i=0;i<10;i++)
        while(v[i]--)
            cout<<str[i];
    return 0;
}