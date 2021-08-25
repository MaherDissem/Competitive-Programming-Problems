#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll mat[n][n];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                char mij; cin>>mij;
                mat[i][j]=mij-'0';
            }
        }      /* 
        ll r=0,c=0;
        for(ll k=0;k<n;k++)
        {
            r+=mat[k][n-1];
            if(r) break;
        }
        for(ll k=0;k<n;k++)
        {
            c+=mat[n-1][k];
            if(c) break;
        }      */
        int flag=0;
        // if(r==0 && c==0) flag=1;
        if(flag==0)
        {
            for(ll i=0;i<n-1;i++)
            {
                for(ll j=0;j<n-1;j++)
                {
                    if(mat[i][j]==1)
                    {
                        if(mat[i+1][j]==0 && mat[i][j+1]==0)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag) break;
            }
        }
        flag? cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}


/*
5
4
0010
0011
0000
0000
2
10
01
2
00
00
4
0101
1111
0101
0111
4
0100
1110
0101
0111

*/