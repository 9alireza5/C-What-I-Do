#include <stdio.h>

int main(void) {
    FILE *file;
    char text[100];

    // Write to file
    file = fopen("myfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write to file: ");
    scanf(" %[^\n]", text); // read line with spaces
    fprintf(file, "%s\n", text);
    fclose(file);

    // Read from file
    file = fopen("myfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File content:\n");
    while (fgets(text, sizeof(text), file)) {
        printf("%s", text);
    }
    fclose(file);

    return 0;
}
