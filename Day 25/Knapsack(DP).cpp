#include <bits/stdc++.h>
using namespace std;
//int dp[1002][102];
int max(int a ,int b)
{
    return a > b ? a:b;
}
int Knapsack(int weight[] , int val[] , int W , int n)
{
    int dp[n+1][W+1];
    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ; j<= W ; j++)
        {
            if(i ==0 || j ==0)
            dp[i][j] = 0;
            
            else if(weight[i-1] <=  j)
                    dp[i][j] = max(val[i-1] + dp[i-1][j - weight[i-1]] , dp[i-1][j]);
                    
            else
                dp[i][j] = dp[i-1][j];
                
        }
    }
    return dp[n][W];
}
int main() {
    //memset(dp , -1   , sizeof(dp));
    int val[] =  {60 , 100 , 120};
    int weight[] = {10 , 20 , 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    
    cout << Knapsack(weight , val ,W , n );
	return 0;
}

