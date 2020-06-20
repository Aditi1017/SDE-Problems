#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> row (r , 1); // O(m+n) space (m = an array of equal to size of a single row of matrix)
        vector<int> col(c , 1); // O = ( n = size of array equal to size of a single column of matrix)
        
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
         vector<vector<int>> vec{ { 1, 1, 1 }, 
                         { 1, 0, 1 }, 
                         { 1 , 1, 1} }; 
        setZeroes(vec);
        //printvec(vec);
        
	return 0;
}
# Time Complexity = O(m*n)
