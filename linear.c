#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int numbers[] = {1 , 4, 7, 9, 12, 15};

    int number = get_int("number: ");

    for( int i = 0; i < numbers[i]; i++ )
    {
        if(number == numbers[i])
        {
            printf("number found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;

}
