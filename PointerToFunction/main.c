#include <stdio.h>
#include <stdlib.h>

int addition();

int main()
{
    int result;
    int (*ptr)();
    ptr = &addition;
    result = (*ptr)();
    printf("The sum is: %d\n",result);
}

int addition(){
    int a,b;
    printf("Enter any two values: \n");
    scanf("%d%d",&a,&b);
    return a+b;
}
