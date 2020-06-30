#include<bits/stdc++.h>
using namespace std;
int Money_rob(int arr[]  , int n)
{
    int dp[n+1];
    for(int i = 0 ; i <= n ; i++)
    {
        dp[i] = 0;
    }
    
    if(n == 0) return 0;
    dp[1] = arr[0];
    
    for(int i = 2 ; i <= n ; i++)
    {
        dp[i] = max(dp[i-1] , arr[i-1]+dp[i-2]);
    }
    
    for(int i = 0 ; i <= n ; i++)
    {
        cout << dp[i] << " ";
    }
    
    return dp[n];
}
int main()
{
	int arr[] = {5 , 3, 4 , 11 , 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << Money_rob(arr , n);
	
	return 0;
	
}
