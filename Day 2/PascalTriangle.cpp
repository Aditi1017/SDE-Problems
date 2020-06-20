#include<bits/stdc++.h>
using namespace std;

void generate(int numRows) {
        vector<vector<int>> res(numRows);
        //if(numRows == 0)
           // return res;
           for(int i = 0 ; i < numRows ; i++)
            {
                for(int j = 0 ; j <= i ; j++)
                {
                    if(j == 0 || j == i)
                        res[i].push_back(1);
                    else
                        res[i].push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
        for(int i = 0 ; i < res.size() ; i++)
        {
            for(int j = 0; j < res[i].size(); j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
}
int main()
{
    int n;
    cin >> n;
    generate(n);
   
}
