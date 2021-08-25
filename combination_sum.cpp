#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 3
/*
Given an integer array with all positive numbers and no duplicates, find the number of possible combinations that add up to a positive integer target.
*/
int main()
{
    int nums[N]={1,2,3};
    int target=4;
    int dp[target+1]={1};    // initialize dp[0] to 1, rest to 0
    for(int i=0;i<target+1;i++){
        for(int j:nums){
            if(i-j>=0) dp[i]+=dp[i-j];
        }   // ways before adding j => ++
    }
    cout<<dp[target]<<'\n';
    return 0;
}