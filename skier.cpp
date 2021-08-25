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
        string str; cin>>str;
        map< pair< pair<int,int>,pair<int,int> >, int > paths;
        int x1=0,y1=0,x2=0,y2=0,res=0;
        for(char c:str)
        {
            if(c=='N')
            {
                y2=y1+1;
            }
            else if(c=='S')
            {
                y2=y1-1;
            }
            else if(c=='E')
            {
                x2=x1+1;
            }
            else if(c=='W')
            {
                x2=x1-1;
            }
            pair<int,int> p1=make_pair(x2,y2);
            pair<int,int> p2=make_pair(x1,y1);
            auto p=make_pair(p1,p2);
            auto q=make_pair(p2,p1);
            if(paths[p]||paths[q]) res+=1;
            else{
                res+=5;
                paths[p]=1;
                paths[q]=1;
            }
            x1=x2,y1=y2;
        }
        cout<<res<<'\n';
    }
    return 0;
}