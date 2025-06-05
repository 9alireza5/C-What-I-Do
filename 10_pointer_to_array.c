#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int i;

    ptr = arr; // same as &arr[0]

    printf("Array elements using pointer:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // pointer arithmetic
    }

    printf("\n");

    return 0;
}
