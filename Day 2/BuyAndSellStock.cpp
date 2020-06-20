#include <bits/stdc++.h>
using namespace std;

int main() {
   int prices[6] = {7 , 1, 5 , 3 , 6 ,4};
	int n = 6 , ans = 0;
        int max = 0;
        for(int i = 1 ; i < n ; i++)
        {
                ans +=  prices[i]-prices[i-1];
                cout << ans << " ";
                if(ans < 0) ans = 0;
                if(ans > max ) max = ans;
                //cout << endl;
                cout << max << " ";
                cout  << endl;

        }
        cout << endl;
        cout << ans << " ";
        cout << max;
	return 0;
}

