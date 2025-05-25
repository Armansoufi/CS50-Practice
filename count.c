#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("how much:");
    int numbers[n];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        numbers[i] = get_int("input: ");
    }

    for(int i = 0; i < n; i++)
        {
            if(numbers[i] > 0)
            {
                count++;
            }
        }
        printf("output: %i\n", count);
}
