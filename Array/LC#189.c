void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;

    int temp[numsSize];

    for (int i = 0; i < numsSize; i++) {
        int newIndex = (i + k) % numsSize;
        temp[newIndex] = nums[i];
    }

    
    for (int i = 0; i < numsSize; i++) {
        nums[i] = temp[i];
    }
}
