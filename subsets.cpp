#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<char> set={'a','b','c','d'};
    int n=set.size();            // 2**n number with n bits each
    for(int mask=0; mask<pow(2,n); mask++)  // run counter from 0000,0001 to 1111
    {
        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))         // shift the 1 to the left by i position
            cout<<set[i];
        }
        cout<<'\n';
    } 
    /*
    for(int i=0;i<10;i++){
        cout<<(1<<i)<<endl;
    }*/
    return 0;
}