#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    //map<char,char> beats;
    //beats['R']='P'; beats['P']='S'; beats['S']='R';
    ll t; cin>>t;
    while(t--)
    {
        string str; cin>>str;
        ll R=0,P=0,S=0;
        ll n=str.size();
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='R') R++;
            else if(str[i]=='P') P++;
            else if(str[i]=='S') S++;
        }
        if(R>=P && R>=S) for(ll i=0;i<n;i++) cout<<'P';
        else if(P>=R && P>=S) for(ll i=0;i<n;i++) cout<<'S';
        else for(ll i=0;i<n;i++) cout<<'R';
        cout<<'\n';
    }
}