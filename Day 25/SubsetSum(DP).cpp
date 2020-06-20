#include<bits/stdc++.h>
using namespace std;
bool SubsetSum(int arr[] , int n , int sum)
{
    bool dp[n+1][sum+1];
    for(int i = 0 ; i <=n ; i++) dp[i][0] = true;
    for(int j = 1 ; j <= sum ; j++) dp[0][j] = false;
    for(int i = 1 ; i <=n ; i++)
	{
		for(int j = 1 ; j <=sum ; j++)
		{
		     if(arr[i-1] <= j)
			 dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
		     //cout << dp[1][2]; 
		     else
		     dp[i][j] = dp[i-1][j];
		     
		}
	}
	 for(int i = 0 ; i <=n ; i++)
	{
		for(int j = 0 ; j <=sum ; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
 return dp[n][sum];
}
int main()
{
    int arr[] = { 2 , 3 , 7 , 8 , 10};
    int sum = 11;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if (SubsetSum(arr , n , sum) == true)
        cout << "YES";
    else
        cout << "NO";
}
