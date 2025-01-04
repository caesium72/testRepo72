
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void addition(int *a, int *b)
{
    strcat(a, b);
}
int compare(int *a, int *b)
{
    return strcmp(a, b);
}
int main()
{
    char array_1[100] = "AUST";
    char array_2[100] = "AUST";
    if (compare(array_1, array_2) == 0)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }

    addition(array_1, array_2);
    printf("Addition: %s\n", array_1);
    return 0;
}
