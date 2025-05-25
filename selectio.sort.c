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

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] > numbers[min])
            {
                min = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %i", numbers[i]);
    }
    printf("\n");
}
