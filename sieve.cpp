#include <bits/stdc++.h>
using namespace std;
#define p primes
int main()
{
    // sieve's algorithm
    cout<<"n=?\n";
    int n; cin>>n; 
    vector<int> primes(n+1,1);
    primes[0]=primes[1]=0;
    for(int i=2;i*i<=n;i++)
        if(primes[i])
            for(int j=i*i;j<=n;j+=i)
                primes[j]=0;

    cout<<"prime numbers < n :\n";
    for(int i=0;i<n;i++) if(p[i]) cout<<i<<" "; cout<<'\n';
    return 0;
}