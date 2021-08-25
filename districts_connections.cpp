#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf (int)10e9
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);

int main()
{
    //ios
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll dist[n];
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>dist[i];
            if(i>0){
                if(dist[i]!=dist[i-1]) flag=1;
            }
        }
        ll k=0;
        if(flag==0) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            vector<ll> later;
            for(int i=1;i<n;i++){
                if(dist[i]!=dist[0]) {
                    cout<<'1'<<" "<<i+1<<'\n';
                    k=i+1;}
                else {
                    later.push_back(i+1);
                }
            }
            for(auto j:later) cout<<k<<" "<<j<<'\n';
        }   
    }
    return 0;
}