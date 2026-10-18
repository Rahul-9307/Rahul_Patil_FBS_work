/* No.	Function	Purpose
1	strlen()	Find string length
2	strcpy()	Copy a string
3	strncpy()	Copy a limited number of characters
4	strcat()	Join two strings
5	strncat()	Join a limited number of characters
6	strcmp()	Compare two strings
7	strncmp()	Compare a limited number of characters
8	strchr()	Find the first occurrence of a character
9	strrchr()	Find the last occurrence of a character
10	strstr()	Find a substring
11	strspn()	Count initial characters belonging to a specified set
12	strcspn()	Count initial characters not belonging to a specified set
13	strpbrk()	Find the first character matching a set
14	strtok()	Split a string into tokens
15	strcoll()	Compare strings using locale rules
16	strxfrm()	Transform a string for locale-based comparison
17	strerror()	Get an error message for an error code
18	memcpy()	Copy bytes from one memory area to another
19	memmove()	Move bytes safely when memory areas overlap
20	memcmp()	Compare bytes in memory
21	memset()	Fill a memory area with a byte value */

// 1	strlen()	Find string length

#include <stdio.h>
#include <string.h>

int main()
{

    // strlen()	Find string length

    char arr[] = "Rhaul paitl";
    int length = strlen(arr);

    printf("The arr length is : %d \n", length);

    //  3	strncpy()	Copy a limited number of characters
    char copy1[sizeof(arr)-2];
    char num = strncpy(copy1,arr,sizeof(arr));
     printf("Copy a limited number of characters  is : %s", copy1);

    return 0;
}