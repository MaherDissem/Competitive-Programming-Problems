#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int n,m;
    vector<int> a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ai; cin>>ai;
        a.push_back(ai);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int bi; cin>>bi;
        b.push_back(bi);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,res=0;
    while(!(i==n||j==m))
    {
        if(abs(a[i]-b[j])<2)
        {
            res++;
            i++;
            j++;
        }
        else
        {
            if(a[i]<b[j]) i++;
            else j++;
        }
    }
    cout<<res<<'\n';
    return 0;
}
/*
a 1 2 4 6
b 1 5 5 7 9
*/
/*
test spell extension:
helo I'm sayng 
salut je m'appele
*/