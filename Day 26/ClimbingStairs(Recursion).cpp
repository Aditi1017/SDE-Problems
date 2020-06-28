#include <iostream>
using namespace std;
int CountSteps(int n)
{
    if(n == 0) return 1; // as with 0 steps only 1 option
    if(n < 0 ) return 0;
    
    return CountSteps(n-1)+CountSteps(n-2);
}
int main() {
	
	int n ; cin >> n;
	cout <<CountSteps(n);
	return 0;
}

