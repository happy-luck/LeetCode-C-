int cmp(const void* a, const void* b)
{
    return *(int *)a - *(int *)b;
}

int arrayPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int res = 0;
    int i;
    for(i = 0; i < numsSize; i += 2){
        res += nums[i];
    }
    return res;
}