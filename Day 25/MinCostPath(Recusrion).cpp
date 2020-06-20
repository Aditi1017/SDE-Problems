#include <bits/stdc++.h>
using namespace std;
int minPath(int i  , int j  , vector<vector<int>>&mat)
{
    int  n = mat.size();
    int m = mat[0].size();
    
    if(i == (n-1) && j == (m-1))
    return mat[i][j];
    
    if(i >=n || j >=m)
    return 100;
    
    int left = mat[i][j] + minPath(i , j+1 , mat); // current index value is added and moved right
    int right = mat[i][j] + minPath(i+1, j , mat); // left subtree = right
    return min(left, right);                     // right subtree = bottom
}

int main() {
	int n , m ;
	cin >> n >> m;
	vector<vector<int>> mat(n , vector<int>(m , 0));
	for(int i = 0 ; i <n ; i++)
	{
	    for(int j = 0 ; j<m ; j++)
	    {
	        cin >> mat[i][j] ;
	    }
	}
	cout << minPath(0 , 0 , mat) << endl;
	
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

