#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "Hello World", *ptr;
    ptr = str;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
}
