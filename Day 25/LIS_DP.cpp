#include<bits/stdc++.h>
using namespace std;
int lis(int arr[] , int n)
{
    int L[n];
    L[0] = 1;
    
    for(int i = 1; i <n ; i++)
    {
        L[i] = 1;
        for(int j = 0 ; j < i ; j++)
        {
            if(arr[i] > arr[j] && L[i] < L[j]+1)
            L[i] = L[j]+1;
        }
    }
    return *max_element(L , L+n);
}
int main()
{
    int arr[] = {50 , 3 , 10 , 7, 40 , 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << lis(arr , n);
}
