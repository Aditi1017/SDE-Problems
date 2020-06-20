#include<bits/stdc++.h>
using namespace std;
bool SubsetSum(int arr[] , int n , int sum)
{
    if(sum == 0)
    return true;
    
    if(n == 0 && sum !=0)
    return false;
    
    if(arr[n-1] <= sum)
    return (SubsetSum(arr , n-1 , sum-arr[n-1])|| SubsetSum(arr , n-1 , sum));
    
    else
    return SubsetSum(arr , n-1 , sum);
    
}
int main()
{
    int arr[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    if (SubsetSum(arr , n , sum) == true)
        cout << "YES";
    else
        cout << "NO";
}
