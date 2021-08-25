#include <bits/stdc++.h> 
using namespace std;
int main()
{
    vector<int> v;
    int t;
    int h,m;
    cin>>t;
    while(t)
    {
        cin>>h>>m;
        m=60-m;
        h=23-h;
        m+=60*h;
        //cout<<m<<'\n';
        v.push_back(m);
        t--;
    }
    v.push_back('\0');
    int i=0;
    while(v[i]!='\0')
    {
        cout<<v[i]<<'\n';
        i++;
    }
    return 0;
}