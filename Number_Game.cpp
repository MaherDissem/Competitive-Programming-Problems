#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    for(int i=3;i<int(sqrt(n))+1;i++)
    {
        if(n%i==0)
            if((n/i)%2==1 or i%2==1)
            {
                printf("Ashishgup\n");
                return;
            }
    }
    printf("FastestFinger\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==1) printf("FastestFinger\n");
        else if(n%2==1 or n==2) printf("Ashishgup\n");
        else
            solve(n);
    }
    return 0;
}
