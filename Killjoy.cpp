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
        int n, x;
        cin>>n>>x;
        ll sum=0;
        int flag=0;
        int flag2=0;
        for(int i=0;i<n;i++){
            int ai; cin>>ai;
            sum+=ai;
            if(ai!=x) flag=1;
            if(ai==x) flag2=1;
        }
        if(!flag) cout<<"0\n";
        else if(sum==x*n || flag2) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}