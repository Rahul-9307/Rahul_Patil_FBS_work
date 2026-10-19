// strtok()	Split a string into tokens

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Apple,Banana,Mango";

    char *p = strtok(str, ",");

    while (p != NULL)
    {
        printf("%s ", p);
        p = strtok(NULL, ",");
    }

    return 0;
}
