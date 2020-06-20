#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    int count = 0;
        while(n){
            count += n/5;
            n /= 5;
        }
    return count;
}

int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        cout<<countZeros(n)<<endl;
	}
	return 0;
}
