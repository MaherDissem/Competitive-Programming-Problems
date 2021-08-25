#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int t[n+3]={0};
        for(int i=0;i<n;i++){
            int ai; cin>>ai;
            t[ai]++;
        }
        int ans=0;
        /*
        cout<<"|";
        for(int i=0;i<n+2;i++) cout<<t[i]<<" ";
        cout<<"|";
        */
        for(int i=0;i<n+2;i++){  
            if(t[i]==0) break;  
            else if(t[i]>=2 && t[i+1]==0) ans+=2*(i+1);
            else if(t[i]>=2 && t[i+1]==1) ans+=i+1;
            else if(t[i]==1 && t[i+1]==0) ans+=i+1;
            else if(t[i]==1 && t[i+1]>t[i]) ans+=i+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}