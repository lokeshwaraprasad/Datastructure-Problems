#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
    int count = 0;

    // Check each element in nums1
    for (int i = 0; i < nums1Size; i++) {

        // Check if nums1[i] already added to result (avoid duplicates)
        int already = 0;
        for (int x = 0; x < count; x++) {
            if (result[x] == nums1[i]) {
                already = 1;
                break;
            }
        }
        if (already) continue;

        // Check if nums1[i] exists in nums2
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                result[count++] = nums1[i];
                break;
            }
        }
    }

    *returnSize = count;
    return result;
}
