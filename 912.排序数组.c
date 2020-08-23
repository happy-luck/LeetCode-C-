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
int* sortArray(int* nums, int numsSize, int* returnSize){
    QuikSort(nums, 0, numsSize-1);
    *returnSize = numsSize;
    return nums;
}