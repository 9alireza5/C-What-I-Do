#include <stdio.h>

int main(void) {
    char *str = "Hello, Pointer to String!";

    printf("String: %s\n", str);

    // print each character
    printf("Characters:\n");
    while (*str != '\0') {
        printf("%c ", *str);
        str++;
    }

    printf("\n");

    return 0;
}
