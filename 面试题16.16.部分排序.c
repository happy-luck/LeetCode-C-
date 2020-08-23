#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int* subSort(int* array, int arraySize, int* returnSize){
    int i=0,j=0,stage1=1,stage2=0;
    int *sec = (int *)calloc(2, sizeof(int));
    *returnSize = 2;
    if(1 >= arraySize){
        sec[0] = sec[1] = -1;
    }

    for(j=arraySize-1-1; j>=0; --j){
        if(array[j] > array[j+1]){
            swap(&array[j], &array[j+1]);
            sec[0] = j;
            printf("%d ",j);
        }
    }
    for(j=0; j<arraySize-1; ++j){
        if(array[j] > array[j+1]){
            swap(&array[j], &array[j+1]);
            sec[1] = j+1;
        }
    }
    if(0==sec[0] && 0==sec[1])
        sec[0] = sec[1] = -1;
    return sec;
}

int main(){
    int arraySize = 13;
    int *ret;
    int array[13] = {1,2,4,7,10,11,7,12,6,7,16,18,19};
    ret = subSort(array, arraySize,&arraySize);
    printf("%d %d",*ret,*(ret+1));
    return 0;
}