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
    int ind = 0;
    int maxi = L[0];
    for(int i = n-1 ; i>= 0 ; i--)
    {
        if(L[i] > maxi)
        {
        maxi = L[i];
        ind = i;
        }
    }
    vector<int> v;
    v.push_back(arr[ind]);
    for(int i = ind-1 ; i >=0 ; i--)
    {
        if(L[i]+1 == L[ind]  && arr[i] < arr[ind])
        {
            ind = i;
            v.push_back(arr[ind]);
        }
    }
    reverse(v.begin() , v.end());
    for(auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return *max_element(L , L+n);
 
}

int main()
{
    int arr[] = {50 , 3 , 10 , 7, 40 , 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << lis(arr , n);

}
