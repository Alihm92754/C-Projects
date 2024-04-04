#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character = 'A';
    int bytes = sizeof(character) + sizeof('A');
    if(bytes % 2) printf("Odd");
    else printf("Even");
    return 0;
}
