/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *ret = (int *)calloc(fmin(nums1Size,nums2Size), sizeof(int));
    int index1 = 0;
    int index2 = 0;
    *returnSize = 0;
    qsort(nums1, nums1Size, sizeof(int), comp);
    qsort(nums2, nums2Size, sizeof(int), comp);
    while(index1 < nums1Size && index2 < nums2Size){
        if((index1>0 && nums1[index1] == nums1[index1-1]) || nums1[index1] < nums2[index2]){
            index1++;
        } else if((index2>0 && nums2[index2] == nums2[index2-1]) || nums1[index1] > nums2[index2]){
            index2++;
        } else{
            ret[*returnSize] = nums1[index1];
            index1++;
            index2++;
            (*returnSize)++;
        }
    }
    ret = (int *)realloc(ret, (*returnSize) * sizeof(int));
    return ret;
}