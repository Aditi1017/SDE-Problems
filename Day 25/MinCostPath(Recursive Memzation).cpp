#include <bits/stdc++.h>
using namespace std;
int minPath(int i  , int j  , vector<vector<int>>&mat , vector<vector<int>>&dp)
{
    int  n = mat.size();
    int m = mat[0].size();
    
    if(i == (n-1) && j == (m-1))
    return mat[i][j];
    
    if(i >=n || j >=m)
    return 100;
    
    if(dp[i][j]!= -1)
    return dp[i][j];
    
    int left = mat[i][j] + minPath(i , j+1 , mat , dp); // current index value is added and moved right
    int right = mat[i][j] + minPath(i+1, j , mat , dp); // left subtree = right
    return dp[i][j] =  min(left, right);                     // right subtree = bottom
}

int main() {
	int n , m ;
	cin >> n >> m;
	vector<vector<int>> mat(n , vector<int>(m , -1));
	for(int i = 0 ; i <n ; i++)
	{
	    for(int j = 0 ; j<m ; j++)
	    {
	        cin >> mat[i][j] ;
	    }
	}
	vector<vector<int>> dp(n , vector<int>(m , -1));
	cout << minPath(0 , 0 , mat , dp) << endl;
	
	for(int i = 0 ; i <n ; i++)
	{
	    for(int j = 0 ; j<m ; j++)
	    {
	        cout << mat[i][j]  << " ";
	    }
	    cout << endl;
	}
	return 0;
}

