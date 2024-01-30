/*
    Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.

	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

#include<bits/stdc++.h>
using namespace std;


int partitionArray(int input[], int start, int end) {
	int pivot = input[start];
    int i = start;
    int j = end;

    while(i < j){
        while(input[i] <= pivot && i<= end){
        i++;
    }
    while(input[j] > pivot && j>= start){
        j--;
    }
    if(i < j){
        swap(input[i], input[j]);
    }  
    }
    
    swap(input[j], input[start]);

    return j;
}

void quickSort(int input[], int start, int end) {
	if(start < end){
        int pIndex = partitionArray(input, start, end);
        quickSort(input, start, pIndex-1);
        quickSort(input, pIndex + 1, end);
    }
}