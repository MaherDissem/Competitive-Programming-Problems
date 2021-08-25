#include <bits/stdc++.h> 
using namespace std;
int composite(int b)
{
    if(b<4) return 0;
    for(int i=2;i<b;i++)
    {
        if(b%i==0) return 1;
    }
    return 0;
}
int main()
{

    int n,a=2,b=2;
    cin>>n;
    for(b=2;b<pow(10,9);b++)
    {
        if(composite(b)&&composite(b+n))
        {
            a=b+n;
            break;
        }
    }
    cout<<a<<" "<<b<<'\n';
    return 0;
}