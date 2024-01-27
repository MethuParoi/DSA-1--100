// Problem statement
// You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.

// You must sort the elements between 'l' and 'r'.

// Note:
// Change in the input array itself. So no need to return or print anything.
// Example:
// Input: ‘N’ = 7,
// 'ARR' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

//--------------------------------------IMPORTANT-------------------------------------------------

//starting index of the array = l           ARR = [2, 13, 4, 1, 3, 6, 28]
//ending index of the array = r             Sub-array of ARR[1-4] = [13, 4, 1, 3]

// always use: int mid = l + (r - l) / 2; instead of: int mid = r-l / 2; because first one is more robust because it ensures that the midpoint index is correctly calculated even when dealing with array segments(ie. sub-arrays) other than the entire array.

//--------------------------------------IMPORTANT-------------------------------------------------


#include<bits/stdc++.h>
using namespace std;

#include<vector>

void merge(int arr[], int low, int mid, int high){
    std::vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i <= high; i++){
        arr[i] = temp[i-low];
    }

}

void mergeSort(int arr[], int l, int r) {

    if(l < r){
        int mid = l + (r-l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
    
}