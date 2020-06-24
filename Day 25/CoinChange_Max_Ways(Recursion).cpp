#include <iostream>
using namespace std;

int countWays(int coins[] , int n , int sum)
{
    if(sum == 0)
    return 1; // dont include any coins
    
    if(sum < 0)
    return 0;
    
    if(n == 0 && sum!=0)
    return 0;  // i.e. to find a particular sum with no element in array
    
    return countWays(coins , n-1 , sum)+ countWays(coins , n , sum-coins[n-1]);
    
}

int main() {
    int coins[] = {1, 2, 3};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 4;
    
    cout << countWays(coins , n , sum);
	return 0;
}

