//hackerrank
//reversing an array


int* reverseArray(int a_count, int* a, int* result_count) {
        int* new_arr = malloc(a_count * sizeof(int));  // Dynamic memory allocation
    if (new_arr == NULL) {
        exit(EXIT_FAILURE);  // Check if malloc failed
    }

    for (int i = 0; i < a_count; i++) {
        new_arr[i] = a[a_count - 1 - i];  // Reverse indexing
    }

    *result_count = a_count;  // Set result count properly
    return new_arr;        
}
