// You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Bubble Sort'.

// Example:
// Input: ‘N’ = 7
// 'arr' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

// ---------------------------ERR------------------------------

// The issue in your code lies in the inner loop condition of your bubble sort algorithm. Specifically, in the line for (int j = 0; j <= i; j++), you're accessing arr[j+1] inside the loop, which leads to an out-of-bounds access when j is equal to i. This is because array indices start from 0, so the last valid index in the array of size n is n-1.

// ---------------------------ERR------------------------------

#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n) 
{
    for(int i = n-1; i >= 1; i--){

        for(int j=0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}