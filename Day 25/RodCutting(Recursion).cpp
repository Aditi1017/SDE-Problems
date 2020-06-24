#include <bits/stdc++.h>
using namespace std;
//int dp[1002][102];
int max(int a ,int b)
{
    return a > b ? a:b;
}
int Knapsack(int weight[] , int val[] , int N , int n)
{
    int dp[n+1][N+1];
    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ; j<= N ; j++)
        {
            if(i ==0 || j ==0)
            dp[i][j] = 0;
            
            else if(weight[i-1] <=  j)
                    dp[i][j] = max(val[i-1] + dp[i][j - weight[i-1]] , dp[i-1][j]); // whwn including a item do it dp[i] instead of dp[i-1]
                   
            else
                dp[i][j] = dp[i-1][j];
                
        }
    }
    return dp[n][N];
}
int main() {
    //memset(dp , -1   , sizeof(dp));
    int val[] ={1, 5, 8, 9, 10, 17, 17, 20};
    int weight[] = {1 , 2, 3, 4 , 5 , 6, 7 ,8};
    int N = 8;
    int n = sizeof(val)/sizeof(val[0]);
    
    cout << Knapsack(weight , val ,N , n );
	return 0;
}

