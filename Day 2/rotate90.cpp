#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace std;
void transpose(int arr[R][C])
{
    for(int i = 0 ; i<R ; i++)
    {
        for(int j = 0 ; j< C; j++)
        {
          if(i < j)        //if we do for all i then 2 times swap will be done and we get back original Matrix
           {
               int temp = arr[i][j];
                arr[i][j] =arr[j][i];
                arr[j][i] = temp;
           }                     
        }
    }
}

void swapCol(int arr[R][C])
{
    for(int i = 0 ; i<R ; i++)
    {
        for(int j = 0 ; j< C/2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][C-1-j];
            arr[i][C-1-j] = temp;
        }
    }
}

void reverse(int arr[R][C])
{
    
    for(int i = 0 ; i<C ; i++)
    {
        for(int j = 0  , k = C-1; j< k; j++ , k--) //two pointer method
        {
            swap(arr[j][i] , arr[k][i]);
        }
    }
}

 
void printMatrix(int arr[R][C])
{
    for(int i =0 ; i< R ; i++)
    {
        for(int j = 0 ; j < C; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	int arr[R][C] = { { 1, 2, 3, 4 }, 
                      { 5, 6, 7, 8 }, 
                      { 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16 } };
                      
    transpose(arr);
    swapCol(arr);
    printMatrix(arr);
    transpose(arr);
    reverse(arr);
    
    cout << endl;
    //rotate90ACW(arr);
    //printMatrix(arr);
	return 0;
}

