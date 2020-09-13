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
              while(i<j && arr[i] <= key){
                     i++;
              }
              arr[j] = arr[i];
       }
       arr[i] = key;
       QuikSort(arr, i+1, end);
       QuikSort(arr, start, i-1);
}

int heightChecker(int* heights, int heightsSize){
    int i;
    int* heights_copy = malloc(heightsSize * sizeof(int));
    for(i = 0; i < heightsSize; i++) {
        heights_copy[i] = heights[i];
    }
    QuikSort(heights_copy, 0, heightsSize - 1);
    int res = 0;
    for(i = 0; i < heightsSize; i++) {
        if(heights[i] != heights_copy[i]) {
            res++;
        }
    }
    return res;
}