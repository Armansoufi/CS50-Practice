#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    char *s = get_string("text: ");

    int low = 0;
    int up = 0;
    int pun = 0;


    for(char *ptr = s; *ptr != '\0'; ptr++)
    {
        if(islower(*ptr))
        {
            low++;
        }
        if(isupper(*ptr))
        {
            up++;
        }
        if(!isalpha(*ptr))
        {
            pun++;
        }
    }

    printf("%i\n", low);
    printf("%i\n", up);
    printf("%i\n", pun);
}

