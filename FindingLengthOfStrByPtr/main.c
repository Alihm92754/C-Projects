#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *ptr)
{
    char *temp;
    temp = ptr;
    while(temp != '\0'){
        temp++;
    }
    return (temp-ptr);
}

int main()
{
    char str[] = "Hello World!", *ptr;
    int n;
    n = mystrlen(str);
    printf("String length is: %d\n",n);
}
