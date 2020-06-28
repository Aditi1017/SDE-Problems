#include <bits/stdc++.h>
using namespace std;

int Matrix_Chain_Mul(int arr[] , int i , int j)
{
    int s = j+1;
    
    int t[s+1][s+1];
    	for(int i = 0 ; i <=s ; i++)
	{
		for(int j = 0 ; j <=s ; j++)
		{
			t[i][j] = -1;
		}
	}
    if(t[i][j] != -1)
    return t[i][j];
    
    if( i >= j) return 0;
    int min = INT_MAX;
    
    for(int k = i ; k < j ; k++)
    {
        int temp = Matrix_Chain_Mul(arr , i , k) + Matrix_Chain_Mul(arr , k+1 , j) + arr[i-1] * arr[j] *arr[k];
        
        if(temp < min) 
        min = temp;
    }
    return t[i][j] =  min;
}
int main() {
    int arr[] = {1, 2, 3, 4, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    cout << Matrix_Chain_Mul(arr , 1 , n-1);
    
  
	return 0;
}

