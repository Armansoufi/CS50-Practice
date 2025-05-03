#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("usage: ./text key\n");
        return 1;
    }

    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("usage: ./text key\n");
            return 1;
        }
    }

    string input = get_string("input: ");

    int key = atoi(argv[1]);

    for(int i = 0; i < strlen(input); i++)
    {
        if(isalpha(input[i]))
        {
           if(isupper(input[i]))
           {
                input[i] = (input[i] - 'A' + key) % 26 + 'A';
           }
           if(islower(input[i]))
           {
                input[i] = (input[i] - 'a' + key) % 26 + 'a';
           }
        }
    }

    printf("ciphertext: %s\n", input);

    return 0;
}
