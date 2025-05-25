#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *s = get_string("text: ");

    int len = strlen(s);

    char *rev = malloc(len + 1);

    if(rev == NULL)
    {
        return 1;
    }

    for(int i = 0; i < len; i++)
    {
        rev[i] = s[len - 1 - i];
    }
    rev[len] = '\0';

     printf("copy: %s\n", rev);

     free(rev);
}
