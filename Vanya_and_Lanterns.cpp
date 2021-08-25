#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll l,n;
    cin>>n>>l;
    ll m=n;
    vector<ll> v;
    v.push_back(0);
    while(n--)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    v.push_back(l);
    sort(v.begin(),v.end());
    vector<double> w;
    for(ll i=1;i<m+2;i++)
    {
        double dif=v[i]-v[i-1];
        if(i==1||i==m+1) w.push_back(dif);
        else w.push_back(dif/2);
    }
    // for(int i=0;i<m+2;i++)printf(" %d ",v[i]);
    // cout<<endl;
    // for(int i=0;i<m+2;i++)printf(" %f ",w[i]);
    // cout<<endl;
    double maxi=*max_element(w.begin(),w.end());
    printf("%15.15f\n",maxi);
    return 0;
}