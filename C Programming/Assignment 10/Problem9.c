// strrchr()	Find the last occurrence of a character


#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Rahulpatil";

    char *p = strrchr(str, 'l');

        printf("%s", p);
    

    return 0;
}
