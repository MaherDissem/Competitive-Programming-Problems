#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int t;cin>>t;
    while(t--)
    {
        int n,T;cin>>n>>T;
        vector<int> a;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int ai;cin>>ai;
            m[ai]=-1;
            a.push_back(ai);
        }
        for(int i=0;i<n;i++)
        {
            int r=T-a[i];

            if(m[r]==-1){
                m[a[i]]=1;
                m[a[r]]=0;
            }
            if(m[r]==1 && m[a[i]]==1){m[a[i]]=0;}
            if(m[r]==1 && m[a[i]]==0){}
            if(m[r]==0 && m[a[i]]==1){}

            if(m[a[i]]==-1 && m[r]==1){m[a[i]]=0;}
            if(m[a[i]]==-1 && m[r]==0){m[a[i]]=1;}
            if(m[a[i]]==-1 && m[r]==-1){m[a[i]]=1; m[r]=0;}
        }
        for(int i=0;i<n;i++)
        {
            cout<<m[a[i]]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}