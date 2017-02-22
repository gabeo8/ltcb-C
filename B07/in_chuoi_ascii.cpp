#include <stdio.h>
#include <string.h>

int main()
{
    char s[50] = "hello";
    gets(s);
    printf("ASCII: ");
    for (int i=0;i <strlen(s); i++)
    {
        printf("%d ",s[i]);
    }
}
