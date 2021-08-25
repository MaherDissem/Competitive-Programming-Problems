// https://codeforces.com/problemset/problem/1365/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
bool valid(ll x,ll y,ll n,ll m);
int main()
{
    ios
    char grid[60][60];
    ll t; cin>>t;
    while(t--)
    {
        ll n,m;
        // input
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
            for(ll j=1;j<=m;j++)
                cin>>grid[i][j];
        // bad persons' neighbours => walls
        ll neigh[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(grid[i][j]=='B'){
                    for(ll k=0;k<4;k++){
                        ll x=i+neigh[k][0];
                        ll y=j+neigh[k][1];
                        if(grid[x][y]=='.' && valid(x,y,n,m))
                            grid[x][y]='#';
                    }
                }
            }
        }
        // check if bad ppl can access (n,m) and bad can't
        // Breadth-first search algorithm
        queue<pair<ll,ll>> qu;
        bool visited[n+6][m+6];
        if(grid[n][m]=='.'){
            qu.push({n,m});
            visited[n][m]=true;
        }
        while (!qu.empty())
        {
            pair<ll,ll> curr = qu.front();
            qu.pop();
            for (ll k=0;k<4;k++)
            {
                ll x=curr.first + neigh[k][0];
                ll y=curr.second + neigh[k][1];
                if (valid(x,y,m,n) && !visited[x][y] && grid[x][y] != '#')
                {
                    qu.push({x, y});
                    visited[x][y] = true;
                }
            }
        }
        bool ok=true;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if((grid[i][j]=='G' && !visited[i][j]) || (grid[i][j]=='B' && visited[i][j])){
                    ok=false;
                    break;
                }
            }
        }
        cout<<(ok ? "Yes\n" : "No\n");
        /*
        for(ll i=1;i<=n;i++)
            for(ll j=1;j<=m;j++)
                cout<<grid[i][j];
        */
    }
    return 0;
}
bool valid(ll x,ll y,ll n,ll m)
{
    return x>0 && x<=n && y>0 && y<=m;
}