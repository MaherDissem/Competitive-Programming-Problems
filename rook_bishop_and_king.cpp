#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
int main()
{
    ios
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    // rook
    if(r1==r2||c1==c2) cout<<"1 ";
    else cout<<"2 ";
    // bishop
    if((r1+c1)%2!=(r2+c2)%2) cout<<"0 ";
    else if(r1+c1==r2+c2 || r1-c1==r2-c2) cout<<"1 ";
    else cout<<"2 ";
    // king
    cout<<max(abs(r1-r2),abs(c1-c2));
    return 0;
}