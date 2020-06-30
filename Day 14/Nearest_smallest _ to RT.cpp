#include <bits/stdc++.h>
using namespace std;

void printNGE(int arr[] , int n)
{   stack<int> s;
    vector<int> v;
    for(int i = n-1 ; i >=0 ; i--)
    {
       
        while(s.size() > 0 && s.top() >= arr[i]) // while pop stack empty means no larger than curr so -1
            {
                s.pop();
            }
              
            if(s.size() == 0)
            v.push_back(-1);
            
            else
            v.push_back(s.top());
          s.push(arr[i]);   
    }
    reverse(v.begin() , v.end());
    for(auto i : v)
    {
        cout << i << " ";
    }
}

int main() {
	int arr[] =  { 4  , 5 , 2 , 10 , 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr , n);
	return 0;
}

