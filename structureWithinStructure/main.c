#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    int rollno;
    char name [50];
    float per;
    struct date doa;
};

int main()
{
    struct student x;
    printf("Enter rollno, name, per, doa\n");
    scanf("%d%s%f%d%d%d",&x.rollno, x.name, &x.per, &x.doa.day, &x.doa.month, &x.doa.year);
    printf("Rollno = %d\n",x.rollno);
    printf("Name = %s\n",x.name);
    printf("Percentage = %f\n",x.per);
    printf("Doa = %d/%d/%d\n",x.doa.day, x.doa.month, x.doa.year);
}
