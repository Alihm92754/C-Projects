#include <stdio.h>
#include <stdlib.h>

void my_strcat(char *s2, char *s1) {

    while(*s2 != '\0') {
        s2++;
    }
    while(*s1 != '\0') {
        *s2++ = *s1++;
        *s2 = '\0';
    }
}

int main()
{
    char str1[] = "Hello ", str2[] = "World";
    my_strcat(str1,str2);
    printf("String1 is: %s",str1);
}
