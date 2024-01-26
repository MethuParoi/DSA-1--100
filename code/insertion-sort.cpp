// Problem statement
// You are given an integer array 'arr' of size 'N'.

// You must sort this array using 'Insertion Sort' recursively.

//  Note:
// Change in the input array itself. You don't need to return or print the elements.
// Example:
// Input: ‘N’ = 7
// 'arr' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

#include <bits/stdc++.h>
using namespace std;

//Approach-1

// void insertionSort(int arr[], int n)
// {
//     for(int i=0; i<=n-1; i++){
//         int j = i;

//         while(j>0 && arr[j-1] > arr[j]){
//             std::swap(arr[j-1], arr[j]);
//             j--;
//         }
//     }
// }

//Approach-2

void insertionSort(int arr[], int n)
{
    for(int i=0; i<= n-1; i++){
        for(int j=i; j>0; j--){

            if(arr[j-1] > arr[j]){
                std::swap(arr[j-1], arr[j]);
            }
        }
    }
}
