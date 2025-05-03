#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("height: ");
    if ( height < 1|| height > 8 )
    {
        printf("please insert a number between 1 and 8!\n");
        return 1;
    }

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < height - i - 1; j++)
        {
            printf(" ");

        }
        for(int r = 0; r < i + 1; r++)
        {
            printf("#");
        }
        printf("  ");
        for(int a = 0; a < i + 1; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}