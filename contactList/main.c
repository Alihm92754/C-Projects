#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct contact {

    char name[50];

    char phone_num[20];

};



int main() {

    struct contact contacts[MAX_CONTACTS];

    int num_contacts = 0;



    while (1) {

        printf("Choose an option:\n");

        printf("1. Add a contact\n");

        printf("2. Search for a contact\n");

        printf("3. Delete a contact\n");

        printf("4. Quit\n");



        int option;

        scanf("%d", &option);



        if (option == 1) {

            if (num_contacts >= MAX_CONTACTS) {

                printf("Error: Contact list is full\n");

                continue;

            }



            struct contact new_contact;

            printf("Enter the contact name: ");

            scanf("%s", new_contact.name);

            printf("Enter the phone number: ");

            scanf("%s", new_contact.phone_num);



            contacts[num_contacts++] = new_contact;

            printf("Contact added\n");

        } else if (option == 2) {

            char search_name[50];

            printf("Enter the name to search for: ");

            scanf("%s", search_name);



            int found = 0;

            for (int i = 0; i < num_contacts; i++) {

                if (strcmp(contacts[i].name, search_name) == 0) {

                    printf("Name: %s\nPhone number: %s\n", contacts[i].name, contacts[i].phone_num);

                    found = 1;

                    break;

                }

            }



            if (!found) {

                printf("Contact not found\n");

            }

        } else if (option == 3) {

            char delete_name[50];

            printf("Enter the name to delete: ");

            scanf("%s", delete_name);



            int found = 0;

            for (int i = 0; i < num_contacts; i++) {

                if (strcmp(contacts[i].name, delete_name) == 0) {

                    for (int j = i; j < num_contacts - 1; j++) {

                        contacts[j] = contacts[j + 1];

                    }

                    num_contacts--;

                    found = 1;

                    printf("Contact deleted\n");

                    break;

                }

            }



            if (!found) {

                printf("Contact not found\n");

            }

        } else if (option == 4) {

            break;

        } else {

            printf("Invalid option\n");

        }

    }



    return 0;

}
