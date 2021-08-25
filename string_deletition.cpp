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
        string s; cin>>s;
        int j=-1;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                j=i;
            }
        }
        s.erase(j);
        map<int,int>m; m[0]=0;m[1]=0;
        char cur=s[0];
        int nbr1=0,nbr0=0;
        for(int i=1;i<n;i++){
            if(cur=='1'){
                nbr1++;
                m[0]=max(m[0],nbr0);
            }
            if(cur=='0'){
                nbr0++;
                m[1]=max(m[1],nbr1);
            }
        }
        

    }
    return 0;
}