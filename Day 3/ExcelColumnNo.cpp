#include<bits/stdc++.h>
using namespace std;
int ExcelColumnNumber(string str)
{
    int ans = 0;
    for(int i = str.length() ; i > 0 ; i--)
    {
        ans += (str[i-1] - 'A' +1) * pow(26 , str.length()-i);
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    cout << ExcelColumnNumber(str);
    return 0;
}
