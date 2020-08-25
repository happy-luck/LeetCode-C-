#include <stdio.h>
#include <stdlib.h>

int comp(const void*a,const void*b){
    return *(int*)b-*(int*)a;
}
int largestPerimeter(int* A, int ASize){
    int i;
    qsort(A,ASize,sizeof(int),comp);//排序
    for(i = 0; i < ASize; i++){
        printf("%d ",A[i]);
    }
    for(i = 0; i < ASize-2; i++){
        if(A[i] < A[i+1] + A[i+2]){
            return A[i] + A[i+1] + A[i+2];
        }
    }
    return 0;
}
