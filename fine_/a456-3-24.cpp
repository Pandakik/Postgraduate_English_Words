bool find132pattern(int* nums, int numsSize) {
    int n = numsSize;
    int candidate_k[n], top = 0;
    candidate_k[top++] = nums[n - 1];
    int max_k = INT_MIN;

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < max_k) {
            return true;
        }
        while (top && nums[i] > candidate_k[top - 1]) {
            max_k = candidate_k[--top];
        }
        if (nums[i] > max_k) {
            candidate_k[top++] = nums[i];
        }
    }

    return false;
}


