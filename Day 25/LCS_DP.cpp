#include <bits/stdc++.h>
using namespace std;
int max(int a , int b)
{
    return a>b ? a:b;
    
}
int lcs(string s1 , string s2 , int m , int n)
{
   int  L[m+1][n+1];
    int i , j;
    for(int i = 0 ; i <= m ; i++)
    {
        for(int j = 0 ; j<= n ; j++)
        {
            if(i == 0 || j == 0)
            L[i][j] = 0;
            
            else if(s1[i-1] == s2[j-1])
            L[i][j] =  L[i-1][j-1] + 1; 
            
            else
                L[i][j] = max(L[i-1][j] , L[i][j-1]);
        }
    }
    for(int i = 0 ; i <= m; i++)
    {
        for(int j = 0 ; j <=n ; j++)
        {
            cout << L[i][j] << " ";
        }
        cout << endl;
    }
   return L[m][n];
}
int main() {
	string s1 = "CED";
	int m = s1.size();
	string s2 = "ACD";
	int n = s2.size();
    cout << lcs(s1 , s2 , m , n);
	return 0;
}

