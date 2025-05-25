#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    char *s = get_string("text: ");

    
    int len = strlen(s);

    int word = 0;

    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a' || s[i] == 'A')
        {
             word++;
        }
    }

    printf("%i\n",word);

}
