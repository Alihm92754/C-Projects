#include <stdio.h>
#include <stdlib.h>

int my_strcmp(const char *str1, const char *str2) {
    while(*str1 && *str2) {
        if (*str1 != *str2)
            return *str1 - *str2;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    char str1[] = "hello";
    char str2[] = "world";

    if(my_strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    }
    else {
        printf("Strings are not equal\n");
    }

    return 0;
}
