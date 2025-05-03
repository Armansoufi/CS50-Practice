#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string word = get_string("name: ");

    for(int i = 0; i < strlen(word); i++)
    {
        if( i == 0 && isalpha(word[i]))
        {
            printf("%c",toupper(word[i]));

        }
        else if(word[i] == ' ' && i +1 < strlen(word) && isalpha(word[i + 1]))
        {
            printf("%c", toupper(word[i + 1]));
        }

    }
    printf("\n");
    return 0;

}
