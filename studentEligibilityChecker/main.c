#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    float marks;

    // Display menu
    printf("MENU\n");
    printf("1) ARTS\n");
    printf("2) COMMERCE\n");
    printf("3) SCIENCE\n");
    printf("Enter your choice (1-3): ");
    scanf("%d",&option);

    // prompt user to input marks
    printf("Enter marks of the student: ");
    scanf("%f",&marks);

    //check eligibility based on marks
    switch(option) {

        case 1:
            if(marks >= 40 && marks <=60)
                printf("Student is eligible for ARTS\n");
            else
                printf("Student is not eligible\n");
            break;

        case 2:
            if (marks > 60 && marks <= 70)
                printf("Student is eligible for COMMERCE\n");
            else
                printf("Student is not eligible");
            break;

        case 3:
            if (marks > 70 && marks <= 100)
                printf("Student is eligible for SCIENCE\n");
            else
                printf("Student is not eligible\n");
            break;

        default:
            printf("Please enter valid input\n");
    }

    return 0;
}
