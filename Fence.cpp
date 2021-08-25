#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll n,k;
    cin>>n>>k;
    ll m=n;
    vector<ll> v;
    while(n--)
    {
        ll h;
        cin>>h;
        v.push_back(h);
    }
    ll min_sum=0; for(ll j=0;j<k;j++) min_sum+=v[j];
    ll sum=min_sum;
    ll min_index=0;
    for(ll i=k;i<m;i++)
    {
        //cout<<i-k<<" "<<sum<<endl;
        sum=sum+v[i]-v[i-k];
        if(sum<min_sum)
        {
            min_sum=sum;
            min_index=i-k+1;
        }
    }
    //cout<<m-1-k<<" "<<sum<<endl;
    cout<<min_index+1;
    return 0;
}