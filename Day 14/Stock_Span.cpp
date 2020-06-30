#include <bits/stdc++.h>
using namespace std;

void printNGE(int arr[] , int n)
{   stack <pair<int , int >> s;
    vector<int> v;
    for(int i = 0 ; i < n ; i++)
    {
       
        while(s.size() > 0 && s.top().first <= arr[i]) // while pop stack empty means no larger than curr so -1
            {
                s.pop();
            }
              
            if(s.size() == 0)
            v.push_back(-1);
            
            else
            v.push_back(s.top().second);
          s.push({arr[i] , i});   
    }
    //reverse(v.begin() , v.end());
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << i - v[i] << " ";
    }
}

int main() {
	int arr[] =  { 100 , 80 , 60 , 70 , 60 , 70 , 85};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr , n);
	return 0;
}

