#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void QuikSort(int *arr, int start, int end){
     if(start >= end){
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
         while(i < j && arr[i] <= key){
             i++;
         }
         arr[j] = arr[i];
     }
     arr[i] = key;
     QuikSort(arr, i+1, end);
     QuikSort(arr, start, i-1);
 }

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *ret = (int *)calloc(fmin(nums1Size,nums2Size), sizeof(int));
    int index1 = 0, index2 = 0;

    QuikSort(nums1, 0, nums1Size-1);
    QuikSort(nums2, 0, nums2Size-1);
    *returnSize = 0;
    while(index1<nums1Size && index2<nums2Size){
        if(nums1[index1] < nums2[index2]){
            index1++;
        }else if(nums1[index1] > nums2[index2]){
            index2++;
        }else{
            ret[*returnSize] = nums1[index1];
            (*returnSize)++;
            index1++;
            index2++;
        }
    }
    ret = (int *)realloc(ret, (*returnSize) * sizeof(int));
    return ret;
}
