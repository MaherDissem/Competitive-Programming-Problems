#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        int tab[n];
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            tab[i]=a;
        }
        bool pred_div=false;
        bool done=false;
        int i=0;
        while (i<n&& !done)
        {
            if(tab[i]%2==0){cout<<1<<'\n'<<i+1<<'\n'; done=true;}
            else if(tab[i]%2==1 && pred_div==true) {cout<<2<<'\n'<<i<<" "<<i+1<<'\n'; done=true;}
            else
            {
                pred_div=true;
            }
            i++;
        }
        if(!done) cout<<-1<<'\n';
    }
    return 0;
}
