#include <bits/stdc++.h> 
using namespace std; 

bool findPartiion (int arr[], int n)  
{  
    int sum = 0;  
    int i, j;  
       
    for (i = 0; i < n; i++)  
    sum += arr[i];  
      
    if (sum % 2 != 0)  
    return false;  
      
    bool dp[n + 1][sum / 2 + 1];  
      
   
    for (i = 0; i <= n; i++)  
    dp[i][0] = true;  
          
    
    for (j = 1; j <= sum / 2; j++)  
    dp[0][j] = false;  
  
    for (i = 1; i <= n; i++)  
    {  
        for (j = 1; j <= sum/2; j++)  
        {   if(arr[i-1] <= j)
			 dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
		     //cout << dp[1][2]; 
		     else if(arr[i-1] > j)
		     dp[i][j] = dp[i-1][j];
        }      
    }  
 
    for (i = 0; i <= n; i++)  
    {  
    for (j = 0; j <= sum/2; j++)  
        cout<<dp[i][j] << " ";  
    cout<<endl;  
    } 
      
    return dp[n][sum/2];  
}  
  
// Driver Code 
int main()  
{  
    int arr[] = {3, 1, 1, 2, 2, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    if (findPartiion(arr, n) == true)  
        cout << "YES";  
    else
        cout << "NO"; 
    return 0;  
} 
