#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n; cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++)
    {
        ll ai; cin>>ai;
        a.push_back(ai);
    }
    sort(a.begin(),a.end());
    ll x=0,y=0;
    ll l=0,r=n-1;
    while(l<=r)
    {
        if(l==r){
            if(x>y){
                x+=a[l]; break;
            }
            else{
                y+=a[l]; break;
            }
        }
        x+=a[l]; l++;
        y+=a[r]; r--;
    }
    //cout<<x<<" "<<y<<'\n';
    cout<<x*x+y*y<<'\n';
    return 0;
}