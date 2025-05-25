#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    char *s = get_string("text: ");


    for(char *ptr = s; *ptr != '\0'; ptr++)
    {

        if(islower(*ptr))
        {
           *ptr = toupper(*ptr);
        }
        else if(isupper(*ptr))
        {
           *ptr = tolower(*ptr);
        }

    }

    printf("output:%s\n", s);


}

