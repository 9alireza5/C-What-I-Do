#include <stdio.h>

int main(void) {
    int lower, upper;

    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++) {
        int isPrime = 1;
        if (num < 2) {
            isPrime = 0;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
