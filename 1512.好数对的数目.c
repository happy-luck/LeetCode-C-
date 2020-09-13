方法一：
int numIdenticalPairs(int* nums, int numsSize){
    int i, j;
    int res = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] == nums[j]){
                res++;
            }
        }
    }
    return res;
}
方法二：
int numIdenticalPairs(int* nums, int numsSize){
    int i;
    int hash[101] = {0};
    int res = 0;
    for(int i = 0; i < numsSize; i++){
        hash[nums[i]]++;
        res += hash[nums[i]] - 1;
        }
    return res;
}