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
        int n,m;
        cin>>n>>m;
        int sym=0;
        for(int i=0;i<n;i++)
        {
            int a,b,c,d;
            cin>>a>>b;
            cin>>c>>d;
            if(b==c) sym=1;
        }
        if(sym && (m/2)*2==m) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/*
6
3 4
1 2
5 6
5 7
7 4
8 9
9 8
2 5
1 1
1 1
2 2
2 2
1 100
10 10
10 10
1 2
4 5
8 4
2 2
1 1
1 1
1 2
3 4
1 2
1 1
1 1
*/