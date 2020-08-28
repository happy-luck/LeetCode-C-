int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0){
        return 0;
    }
    int i, j, count;
    i = 1;
    count = 1;
    j = 1;
    while(i < numsSize){
        if(nums[i] == nums[i-1]){
            count++;
        } else {
            count = 1;
        }
        if(count <= 2){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return j;
}