#include<bits/stdc++.h>
using namespace std;
int MinimumSubsetSumDf(int arr[]  , int n , int sum)
{
    bool	 dp[n+1][sum+1];
    int i , j;
    for(int i = 0 ; i <= n ; i++)
    dp[i][0] = true;
    
    for(int j = 1 ; j<= sum ; j++)
    dp[0][j] = false;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1  ; j<= sum ; j++)
        {
            if(arr[i-1] <= j)
            dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            
            else
            dp[i][j] = dp[i-1][j];
            
        }
    }
     
	int k , ans = 0;
    for(int i = 0 ; i<= sum/2 ; i++)
    {
        if(dp[n][i] == true)
            k = i;
            ans  = sum - 2 *k;
    }
    
    
     for (i = 0; i <= n; i++)  
    {  
        for (j = 0; j <= sum; j++) 
        {
            cout<<dp[i][j] << " ";  
        }
        cout<<endl;  
    } 
   
    return ans;
    
}
int main()
{
    int arr[] = {1 , 2 ,  7};
    int n = sizeof(arr)/sizeof(arr[0]) , sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
     sum += arr[i];   
     //cout << sum;
    }
    
   cout << MinimumSubsetSumDf(arr  , n , sum);
    
}
