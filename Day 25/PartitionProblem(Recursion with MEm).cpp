#include <iostream>
using namespace std;
bool SubsetSum(int arr[] , int n , int sum)
{
    int dp[n+1][sum+1];
    for(int i = 0 ; i <=n ; i++)
	{
		for(int j = 0 ; j <=sum ; j++)
		{
			dp[i][j] = -1;
		}
	}
    if(sum == 0)
    return true;
    
    if(n == 0 && sum !=0)
    return false;
    
    if(dp[n][sum] != -1) return dp[n][sum];
    
    
    if(arr[n-1] <= sum)
    return dp[n][sum] = (SubsetSum(arr , n-1 , sum-arr[n-1])|| SubsetSum(arr , n-1 , sum));
    
    else if(arr[n-1] > sum)
    return dp[n][sum] =  SubsetSum(arr , n-1 , sum);
    
    
}
bool isEqualPartition(int arr[]  , int n)
{
    int sum = 0;
    for(int i = 0 ; i <n ; i++)
    {
        sum = sum + arr[i];
    }
    if(sum %2  != 0)
        return false;
    else if(sum % 2 == 0)
        return SubsetSum(arr , n , sum/2);
}

int main() {
	int arr[] = { 3, 1 , 5 , 9 , 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	
    if(isEqualPartition(arr , n) == true)
    cout << "YES";
    else
    cout << "NO";
    
	return 0;
}

