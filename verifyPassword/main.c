#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[] = "BigSecret";
    char input[100];

    printf("Enter the password: ");
    scanf("%s", input);

    if(strcmp(password,input) == 0) {
        printf("Correct password! Access granted.\n");
    } else {
        printf("Wrong password! Access denied.\n");
    }

    return 0;
}
