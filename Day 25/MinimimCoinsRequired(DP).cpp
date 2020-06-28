#include <bits/stdc++.h>
using namespace std;

int Minimum_Ways(int arr[]  , int n , int sum)
{
    int dp[sum+1];
    for(int i = 1 ; i <= sum ; i++)
    {
        dp[i] = sum+1;
    }
    dp[0] = 0;
    for(int i = 1 ; i <= sum ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i >= arr[j])   //i.e if coins value is smaller than sum than only include it
            {
                dp[i] = min(dp[i] , dp[i - arr[j]]+1);
                
            }
        }
    }
    for(int i = 0 ; i <= sum ; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[sum];
}
int main() {
	
	int arr[] = {1 ,2 ,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 11;
	
    cout <<	Minimum_Ways(arr , n , sum);
	
	return 0;
}

