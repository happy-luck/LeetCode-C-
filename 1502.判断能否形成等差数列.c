
#include <stdio.h>
#include <stdbool.h>

void QuikSort(int *arr,int start, int end){
    if(start > end){
        return;
    }
    int i = start;
    int j = end;
    int key = arr[start];
    while(i < j){
        while(i < j && arr[j] >= key){
            j--;
        }
        arr[i] = arr[j];
        while(i <j && arr[i] <= key){
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = key;
    QuikSort(arr, i+1, end);
    QuikSort(arr, start, i-1);
}

bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i;
    QuikSort(arr,0, arrSize-1);
    int diff = arr[1] - arr[0];
    for(i = 1; i < arrSize; i++){
        if(arr[i] - arr[i-1] != diff){
            return false;
        }
    }
    return true;
}