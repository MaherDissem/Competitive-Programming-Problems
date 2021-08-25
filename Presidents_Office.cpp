#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int n,m;
    char c;
    scanf("%d %d %c",&n,&m,&c);
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char b;
            cin>>b;
            a[i][j]=b;
        }
    }
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==c)
            {
                int x,y;
                x=i+1;y=j;
                if(x<n && a[x][y]!='.' && a[x][y]!=c && !count(v.begin(),v.end(),a[x][y])) v.push_back(a[x][y]);
                x=i-1;y=j;
                if(x>=0 && a[x][y]!='.' && a[x][y]!=c &&  !count(v.begin(),v.end(),a[x][y])) v.push_back(a[x][y]);
                x=i;y=j+1;
                if(y<m && a[x][y]!='.' && a[x][y]!=c &&  !count(v.begin(),v.end(),a[x][y])) v.push_back(a[x][y]);
                x=i;y=j-1;
                if(y>=0 && a[x][y]!='.' && a[x][y]!=c &&  !count(v.begin(),v.end(),a[x][y])) v.push_back(a[x][y]);
            }
        }
    }
    // cout<<"----"<<endl;
    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<v.size();
    return 0;
}
