#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {

    int rollno;
    char name[60];
    int marks[6];
    int sum;
    float per;
};

int main()
{
    struct student x[20];
    int i,j,n;
    printf("Enter number of students\n");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Enter roll no, name of student %d\n",i+1);
        scanf("%d%s",&x[i].rollno, x[i].name);
        printf("Enter marks in six subjects %s\n",x[i].name);
        for(j=0;j<6;j++)
            scanf("%d",&x[i].marks[j]);
    }
    // Find sum and percentage calc
    for(i=0;i<n;i++) {
        x[i].sum = 0;
        for(j=0;j<6;j++)
            x[i].sum = x[i].sum + x[i].marks[j];
        x[i].per = ((float)x[i].sum)/6;
    }

    printf("Roll No\t Name\t Percentage\n");
    for(i=0;i<n;i++)
        printf("%d\t%s\t%f\n",x[i].rollno, x[i].name, x[i].per);
}
