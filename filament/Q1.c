#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}