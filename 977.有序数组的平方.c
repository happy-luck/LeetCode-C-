方法一：
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void * a, const void * b)
{
    return *(int *)a - *(int *)b;
}

int* sortedSquares(int* A, int ASize, int* returnSize){
    int i, k;
    *returnSize = ASize;
    for(i = 0; i < ASize; i++) {
        A[i] *= A[i];
    }
    qsort(A, ASize, sizeof(int), cmp);
    return A;
}
方法二：双指针
int* sortedSquares(int* a, int n, int* returnSize){
	*returnSize = n;
    int* res = (int *) malloc(sizeof(int) * n);
	if(n == 0) {
        return a;
    }
    int i = 0;
	int left, right;
	while(i < n) {
		if(a[i] >= 0) {
			left = i;
			break;
		}
        i++;
	} 
    right = left - 1;
    i = 0;
	while(left < n && right >= 0) {
		if(a[left] * a[left] < a[right] * a[right]){
			res[i++] = a[left] * a[left];
			left++;
		} else {
			res[i++] = a[right] * a[right];
			right--;
		} 
	} 
	while(left < n) {
		res[i++] = a[left] * a[left];
		left++;
	}
	while(right >= 0){
		res[i++] = a[right] * a[right];
		right--;
	}
	return res;
}