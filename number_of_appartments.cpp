#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n<3 || n==4) cout<<"-1\n";
        else if(n%3==0) cout<<n/3<<" 0 0\n";
        else if((n-5)%3==0) cout<<(n-5)/3<<" 1 0\n";
        else if((n-7)%3==0) cout<<(n-7)/3<<" 0 1\n";
    }
    return 0;
}