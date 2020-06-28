#include <iostream>
using namespace std;
int CountSteps(int n)
{
    int dp[n+1];
    
    dp[0] = 1;
    dp[1] = 1;
    
for(int i = 2 ; i <= n ; i++)
    {
    dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main() {
	
	int n ; cin >> n;
	cout <<CountSteps(n);
	return 0;
}

