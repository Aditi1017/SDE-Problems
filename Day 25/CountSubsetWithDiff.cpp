#include <bits/stdc++.h>
using namespace std;
int CountSubsetGivenDiff(int arr[]  , int n , int sum)
{
    int dp[n+1][sum+1];
    
    for(int i = 0 ; i <=n ; i++) dp[i][0] = 1;
    
    for(int j = 1 ; j <= sum ; j++) dp[0][j] = 0;
     for(int i = 1 ; i <=n ; i++)
	{
		for(int j = 1 ; j <=sum ; j++)
		{
		     if(arr[i-1] <= j)
		     {
			 dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
			}
		     
		     else
		     dp[i][j] = dp[i-1][j];
		     
		}
	}
	return dp[n][sum];
}

int main() {
    int arr[] = {1 ,1, 2 , 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int diff = 1 , val  = 0 ;
    for(int i = 0 ; i <n ; i++)
    {
        val = val + arr[i];
    }
    int sum = (val+diff)/2;

    cout << CountSubsetGivenDiff(arr , n  , sum);
	return 0;
}

