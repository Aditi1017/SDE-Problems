#include <bits/stdc++.h>
using namespace std;

int countWays(int coins[] , int n , int sum)
{
    int t[n+1][sum+1];
    for(int i = 0 ; i <=n ; i++)
	{
		for(int j = 0 ; j <=sum ; j++)
		{
			t[i][j] = -1;
		}
	}
	
    if(sum == 0)
    return 1; // dont include any coins
    
    if(sum <0)
    return 0;
    
    if(n == 0 && sum!=0)
    return 0;  // i.e. to find a particular sum with no element in array
    
    return t[n][sum] = countWays(coins , n-1 , sum)+ countWays(coins , n , sum-coins[n-1]);
    
}

int main() {
    int coins[] = {1, 2, 3};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 4;
    
    cout << countWays(coins , n , sum);
	return 0;
}

