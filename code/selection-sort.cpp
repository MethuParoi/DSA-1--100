//Selction-Sort
// Input:
// N = 5
// arr = {8, 6, 2, 5, 1}

// Output:
// 1 2 5 6 8 
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr) {
    int len = arr.size();

    for(int i = 0; i <= len-2; i++){
        int min = i;

        for(int j = i; j<= len-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}