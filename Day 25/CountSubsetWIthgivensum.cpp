#include<bits/stdc++.h>
using namespace std;
int CountSubsetSum(int arr[] , int n , int sum)
{
    int dp[n+1][sum+1];
    int count = 0;
    
    for(int i = 0 ; i <=n ; i++) dp[i][0] = true;
    
    for(int j = 1 ; j <= sum ; j++) dp[0][j] = false;
    
    for(int i = 1 ; i <=n ; i++)
	{
		for(int j = 1 ; j <=sum ; j++)
		{
		     if(arr[i-1] <= j)
		     {
			 dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
			 count ++;
			}
		     
		     else
		     dp[i][j] = dp[i-1][j];
		     
		}
	}
	return dp[n][sum];
	 for(int i = 0 ; i <=n ; i++)
	{
		for(int j = 0 ; j <=sum ; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
 
}
int main()
{
    int arr[] = {1 , 2 , 3  , 1, 5 };
    int sum = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << CountSubsetSum(arr , n , sum);
   return 0; 
}
