#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int searchInsert(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), compare);

    int low = 0, high = numsSize - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 7;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int index = searchInsert(nums, numsSize, target);
    printf("Index of target in the sorted array: %d\n", index);

    return 0;
}
