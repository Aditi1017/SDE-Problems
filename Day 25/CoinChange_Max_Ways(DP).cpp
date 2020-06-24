#include <bits/stdc++.h>
using namespace std;

int countWays(int coins[] , int n , int sum)
{
    
    int dp[n+1][sum+1];
    
    for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;
    for(int j = 1 ; j <= sum ; j++) dp[0][j] = 0;
    
    for(int i = 1 ; i <=n ; i++)
	{
		for(int j = 1 ; j <=sum ; j++)
		{
			if(coins[i-1] <= j)
			dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
			
			else
			dp[i][j] = dp[i-1][j];
		}
	}
	
	for(int i = 0 ; i <= n ; i++)
	{
	    for(int j = 0 ; j <= sum ; j++)
	    {
	        cout << dp[i][j] << " "; 
	    }
	    cout << endl;
	}
	return dp[n][sum];
}

int main() {
    int coins[] = {1, 2, 3};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 5;
    
    cout << countWays(coins , n , sum);
	return 0;
}

