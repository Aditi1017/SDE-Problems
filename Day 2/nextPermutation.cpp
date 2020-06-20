#include <bits/stdc++.h>
using namespace std;
void nextPermutation(int arr[] , int n)
{
    int i = n -2;
    while(i >= 0 && arr[i] >= arr[i+1]) i--;
    
    if(i >= 0)
    {
        int j = n-1;
        while(j >= 0 && arr[i] > arr[j]) j--;
        swap(arr[i] , arr[j]);
    }
    reverse(arr+i+1 , arr+n);
    
}

int main() {
	int arr[] = {6 , 2 , 1, 5, 4 , 3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
	nextPermutation(arr , n);
	for(int i = 0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
	return 0;
}

