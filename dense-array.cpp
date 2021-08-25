#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf (int)10e9
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);

int main()
{
    ios
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int ai; cin>>ai;
            a.push_back(ai);
        }
        //
        int ans=0;
        for(int i=1;i<n;i++){
            float maxi=max(a[i],a[i-1]);
            float mini=min(a[i],a[i-1]);
            if(maxi>=2*mini){
                float f=maxi/(2*mini);
                //cout<<"float "<<f<<'\n';
                ans+= ceil(log2( f ));
            }
            }
        cout<<ans<<'\n';
        }
    return 0;
}
/*

6
4
4 2 10 1
2
1 3
2
6 1
3
1 4 2
5
1 2 3 4 3
12
4 31 25 50 30 20 34 46 42 16 15 16

*/