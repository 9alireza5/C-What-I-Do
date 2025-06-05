#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr;

    ptr = &num; // ptr points to address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address it points to): %p\n", ptr);
    printf("Value at ptr (dereferencing): %d\n", *ptr);

    return 0;
}
