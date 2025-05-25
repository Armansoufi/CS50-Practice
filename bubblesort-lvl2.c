#include <cs50.h>
#include <stdint.h>
#include <stdio.h>


int main(void)
{
    int n = get_int("how much:");
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("input: ");
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }

    }
    for(int i = 0; i < n; i++)
    {
        printf(" %i", numbers[i]);
    }
    printf("\n");


}

