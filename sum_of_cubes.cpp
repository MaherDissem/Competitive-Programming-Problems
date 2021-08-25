#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf (int)10e9
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define watch(x) cout << (#x) << " is " << (x) << endl

bool check(int n)
{
    if (n <= 0)
        return false;
    /* The maximum power of 3 value that
       integer can hold is 1162261467 ( 3^19 ) .*/
    return 1162261467 % n == 0;
}

int main() {
   //freopen("stern.in", "r", stdin);
    ios;
    int t,n;
    for(cin >> t; t--;){
        ll x,flag=0;
        cin >> x;
        for(ll i=1;i*i*i<=x;i++){
            if (check(x-i*i*i) ) flag=1;
        }
        (flag==1)? cout << "YES" << endl:cout<< "NO" << endl;

    }

    return 0;
}