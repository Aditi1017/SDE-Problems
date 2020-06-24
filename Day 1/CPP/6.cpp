#include<bits/stdc++.h>  
using namespace std;  

void mergeIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) cout << -1 ;
        
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> output;
        
        output.push_back(intervals[0]);
        
        for(int i=1; i<intervals.size(); i++) {
            if(output.back()[1] >= intervals[i][0])
                output.back()[1] = max(output.back()[1] , intervals[i][1]);
            else 
                output.push_back(intervals[i]); 
        }
        for(int i =0 ; i <output.size(); i++)
        {
         for(int j =0 ;j <output[i].size() ; j++)
         
             cout << output[i][j] << " ";
        cout << endl;
        }
    }
int main()  
{  
    vector<vector<int>> intervals =  [[1,3],[2,6],[8,10],[15,18]]
   
     mergeIntervals(intervals);  
     
    return 0;  
}  
