// strstr()	Find a substring

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I love  the best world programming";
    
    char *p = strstr(str, "best");

        printf("%s", p);
    

    return 0;
}
