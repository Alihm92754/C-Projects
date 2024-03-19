#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {

    int rollno;
    char name[60];
    float per;
};

int main()
{
    struct student x[20];
    char sname[50];
    int i,n,flag = 0;
    printf("Enter no. of students\n");
    scanf("%d",&n);
    printf("Enter %d student details\n",n);
    for(i=0;i<n;i++)
        scanf("%d%s%f",&x[i].rollno, &x[i].name, &x[i].per);

    printf("Student Details\n");
    for(i=0;i<n;i++)
        printf("%d\t%s\t%f\n", x[i].rollno, x[i].name, x[i].per);

    printf("Enter student name to be searched\n");
    scanf("%s",sname);

    for(i=0;i<n;i++) {
        if(strcmp(x[i].name,sname) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%s is found\n",sname);
    else
        printf("%s is not found\n",sname);

}
