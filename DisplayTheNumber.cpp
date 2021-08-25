#include <bits/stdc++.h> 
using namespace std;

vector<long long> max_number_with(long long a)
{
    vector<long long> tab; // used number __ max val possible
    switch(a)
    {
        case 1:
            tab={1,0};
            break;
        case 2:
            tab={2,1};
            break;
        case 3:
            return tab={3,7};  //7
            break;
        case 4:
            return tab={2,1}; // 11
            break;
        case 5:
            return tab={3,7}; //711
            break;
        case 6:
            return tab={2,1}; // 111
            break;
        default:    // >=6
            if(a%2!=0)
                tab={3,7}; // 711
            else 
                tab={2,1};
            break;
    }
    return tab;
}
int main()
{
    long long t;
    cin>>t;


    while(t)
    {
        long long s=0;
        long long n;
        cin>>n;
        while(n>0)
        {
            long long b=max_number_with(n)[1];
            //cout<<"n="<<n<<" s="<<s<<" b="<<b<<"\n";
            n-=max_number_with(n)[0];
            // s*=10;
            // s+=b;
            if(b!=0)
                cout<<b;
        }
        //cout<<s<<'\n';
        cout<<'\n';
        t--;
    }
    return 0;
}