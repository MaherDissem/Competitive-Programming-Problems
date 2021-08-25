#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
void printVect(int n,ll b[]){
    for(int i=0;i<n;i++) cout<<b[i]<<' '; cout<<'\n';
}
int main()
{
    ios
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<"2\n";
        stack<int>s;
        for(int i=1;i<=n;i++) s.push(i);
        int flag=1;
        while(!s.empty() && s.top()!=2 ){
            int a=s.top(); s.pop();
            int b=s.top(); s.pop();
            cout<<a<<' '<<b<<'\n';
            //float f=(a+b)/2; cout<<f<<'\n';
            s.push((a+b+2-1)/2);
            flag=0;
        }
        if(flag){
            int a=s.top(); s.pop();
            int b=s.top(); s.pop();
            cout<<a<<' '<<b<<'\n';
        }
    }
    return 0;
}
/*
ceil(x/y) = (x+y-1)/y = x/y +1 -1/y
*/