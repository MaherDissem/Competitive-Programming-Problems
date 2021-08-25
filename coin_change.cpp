#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 3
#define inf (int)10e9
/*
You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.*/
int main()
{
    int coins[N]={1,2,5};
    int target=11;
    
    int dp[target+1];
    for(int i=0;i<target+1;i++) dp[i]=INT_MAX;
    for(int i:coins) dp[i]=1;
    dp[0]=0;

    for(int i=1;i<target+1;i++){
        for(int j:coins){
            if(i-j>=0) dp[i]=min(dp[i], dp[i-j]+1);
        }
    }
    cout<<dp[target]<<'\n';
    return 0;
}