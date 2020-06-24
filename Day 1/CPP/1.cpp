#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> row (r , 1);
        vector<int> col(c , 1);
        
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                if( row[i] == 0 || col[j]  == 0 )
                {
                   matrix[i][j] = 0;
                }
            }
        }
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    
 }

int main() {
#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("1.txt" , "r" , stdin);
    //for writing output to output.txt
    freopen("2.txt" , "w" , stdout);
#endif
         vector<vector<int>> vec{ { 1, 1, 1 }, 
                         { 1, 0, 1 }, 
                         { 1 , 1, 1} }; 
        setZeroes(vec);
        //printvec(vec);
        
	return 0;
}
