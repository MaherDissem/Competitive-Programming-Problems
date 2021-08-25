#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int n; cin>>n;
    vector<ll> a;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        ll ai;cin>>ai;
        a.push_back(ai);
    }
    sort(a.begin(),a.end());
    ll l=0,r=n-1;
    while(l<=r)
    {
        if(l==r){
            ans.push_back(a[r]);
            break;
        }
        ans.push_back(a[r]);
        ans.push_back(a[l]);
        r--;l++;
    }
    ll maxi=0;
    for(int i=1;i<n-1;i+=2) if(ans[i]<ans[i-1] && ans[i]<ans[i+1]) maxi++;
    cout<<maxi<<'\n';
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    return 0;
}