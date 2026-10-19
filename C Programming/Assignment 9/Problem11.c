	// strspn()	Count initial characters belonging to a specified set

    
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "123abc456";
char set[] = "0123456789";

printf("%zu", strspn(str, set));
    return 0;
}
