#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector< pair<int,int> > v(n);
        int m=n;
        while(n--)
        {
            int xi,yi;
            cin>>xi>>yi;
            pair<int,int>p=make_pair(xi,yi);
            v.push_back(p);
        }
        string ch="";
        sort(v.begin(),v.end());
        int x=0,y=0;
        int can=1;
        for(int i=0;i<m;i++)
        {
            cout<<"ch="<<ch<<'\n';
            cout<<"x="<<x<<"v[i].first="<<v[i].first<<'\n';
            cout<<"y="<<y<<"v[i].second="<<v[i].second<<'\n';

            if(x<v[i].first && y<v[i].second)
            {
                while(x<v[i].first)
                {
                    ch+='R';
                    x++;
                }
                while(y<v[i].second)
                {
                    ch+='U';
                    y++;
                }
            }
            if(x>v[i].first || y>v[i].second)
            {
                can=0;
                break;
            }
        }
        if(can)
        {
            cout<<"YES"<<'\n';
            cout<<ch;
        }
        else
        {
            cout<<"NO"<<'\n';
        } 
    }
    return 0;
}