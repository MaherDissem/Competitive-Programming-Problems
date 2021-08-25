#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 3
/*
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
Note: You can only move either down or right at any point in time.
*/
int main()
{
    int grid[N][N] = {{1,3,1},{1,5,1},{4,2,1}};
    int dp[N][N]={0};
    int n=N;
    dp[0][0]=grid[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) continue;
            if(i-1<0) dp[i][j]=grid[i][j]+dp[i][j-1];
            else if(j-1<0) dp[i][j]=grid[i][j]+dp[i-1][j];
            else dp[i][j]=min(grid[i][j]+dp[i-1][j], grid[i][j]+dp[i][j-1]);
        }
    }
    cout<<dp[2][2]<<'\n';
    return 0;
}