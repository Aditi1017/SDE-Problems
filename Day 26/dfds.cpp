#includebits/stdc++.h>
using namespace std;
bool isPalindrome(char str[] , int s)
{
    char first = str[0] ;
    char last = str[s-1];
    while(first <= last)
    {
        if(first == last)
        {
            first++;
            last--
        }
    }
}
int Palindrome_partiton(char str[] , int i , int j)
{
    int s = j+1;
    if(i >= j) return 0;
    
    if(isPalindrome(str , s) == true)
    return 0;
    
}
int main()
{
    char str[] "ababbbabbababa";
    int n = sizeof(str)/sizeof(str[0]);
    cout << Palindrome_partiton(arr , 1 , n-1);
    
    return 0;
}
