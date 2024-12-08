#include <stdio.h>

void modify_array(int arr[], int size) {
    arr[0] = 5;  // This change affects the original array
}

int main() {
    int my_array[] = {10, 20, 30};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    modify_array(my_array, size);
    printf("%d, %d, %d\n", my_array[0], my_array[1], my_array[2]);  // Output: 5, 20, 30 (changed)
    return 0;
}
