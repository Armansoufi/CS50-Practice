#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *s = get_string("text: ");

    char *copy = malloc(strlen(s) + 1);

    if(copy == NULL)
    {
        return 1;
    }

    for(int i = 0; i < strlen(s); i++)
    {
        copy[i] = s[i];
    }

     printf("copy: %s\n", copy);

     free(copy);

}
