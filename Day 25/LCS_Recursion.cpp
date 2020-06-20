#include <iostream>
using namespace std;
int lcs(int i , int j , string s1 , string s2)
{
    if(i >= s1.size() || j >= s2.size())
    return 0;
    
    if(s1[i] == s2[j])
    return 1+lcs(i+1, j+1 , s1 , s2);
    
    else
    {
        return max(lcs(i+1 , j  , s1 , s2) , lcs(i , j+1 , s1 , s2));
    }
}
int main() {
	string s1 = "ACD";
	int m = s1.size();
	string s2 = "CED";
	int n = s2.size();
    cout << lcs(0  , 0 , s1 , s2);
	return 0;
}

