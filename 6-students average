#include <stdio.h>

struct Student {
    char name[50];
    float score;
};

int main(void) {
    struct Student students[3];
    int i;
    float sum = 0, average;

    for (i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter score of %s: ", students[i].name);
        scanf("%f", &students[i].score);

        sum += students[i].score;
    }

    average = sum / 3;
    printf("Average score: %.2f\n", average);

    return 0;
}
