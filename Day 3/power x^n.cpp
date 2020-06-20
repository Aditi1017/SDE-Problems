#include <iostream>
using namespace std;
double power(double x , int n)
{
    if (n == 0 )return 1;
    
    double ans = power( x , n/2);
    if(n % 2 == 0)
    return ans * ans;
    else
    {
        if ( n > 0)
        return x* ans * ans;
        else
         return (ans * ans )/x;
    }
}
int main() {
        double x ; int  n;
        cin >> x >> n;
       cout <<  power(x , n);
        
	return 0;
}

