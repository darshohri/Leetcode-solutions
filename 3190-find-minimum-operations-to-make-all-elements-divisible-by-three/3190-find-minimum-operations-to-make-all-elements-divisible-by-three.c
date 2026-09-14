int minimumOperations(int* nums, int numsSize) {
    int t=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] % 3!= 0) {
            t++;
        }
    }
    return t;
}