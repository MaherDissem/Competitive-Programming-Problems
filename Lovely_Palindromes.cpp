#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    string str;
    cin>>str;
    ll n=str.size();
    string str2(str);
    for(ll i=n-1;i>=0;i--) str+=str2[i];
    cout<<str;
    return 0;
}