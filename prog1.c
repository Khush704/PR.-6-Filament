#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char result[20];
    int len, i;

    printf("Enter string :");
    scanf("%s", &str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        result[i] = str[len - i - 1];
    }

    result[len] = '\0'; 

    if (strcmp(str, result) == 0)
    {
        printf("\nThis string is Palindrome");
    }
    else
    {
        printf("\nThis string is Not a palindrome");
    }

    return 0;
}
