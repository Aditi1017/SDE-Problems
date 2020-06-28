#include <bits/stdc++.h>
using namespace std;
int max(int a , int b)
{
    return (a > b) ? a : b;
}
int eggDrop(int eggs , int floors)
{
    if(floors == 1 || floors == 0) return floors;   //as only 1 or 0 trial possible
    
    if(eggs == 1) return floors;
    
    int min = INT_MAX , res;
    for(int i = 1 ; i <= floors ; i++)
    {
        res =  max(eggDrop(eggs , floors-i) , eggDrop(eggs - 1, i -1));
        if(res < min);
        min = res;
    }
    
    return min+1;
}
int main() {
	int eggs = 2;
	int floors = 36;
	
	cout << eggDrop(eggs , floors);
	return 0;
}

