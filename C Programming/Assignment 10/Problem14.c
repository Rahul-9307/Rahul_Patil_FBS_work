// strcoll()	Compare strings using locale rules

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_COLLATE, "");

    char str1[] = "hgApplehgh";
    char str2[] = "mBananaghjgjhk";

    int result = strcoll(str1, str2);

    if (result == 0)
    {
        printf("Strings are equal");
    }
    else if (result < 0)
    {
        printf("Apple comes before Banana");
    }
    else
    {
        printf("Apple comes after Banana");
    }

    return 0;
}
