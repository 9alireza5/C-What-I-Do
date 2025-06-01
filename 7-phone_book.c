#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
};

int main(void) {
    struct Contact contacts[5];
    int count = 0;
    int choice;
    char searchName[50];

    while (1) {
        printf("\nPhone Book Menu\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 5) {
                printf("Enter name: ");
                scanf("%s", contacts[count].name);
                printf("Enter phone: ");
                scanf("%s", contacts[count].phone);
                count++;
            } else {
                printf("Phone book is full!\n");
            }
        } else if (choice == 2) {
            printf("Enter name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Phone: %s\n", contacts[i].phone);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Contact not found.\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
