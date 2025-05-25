#include <stdio.h>
#include <stdint.h>
#include <cs50.h>


void swap(int *max, int *min);

int main(void)
{
    int n = get_int("how much:");
    int numbers[n];

    for(int i = 0; i < n; i++)
    {
        numbers[i] = get_int("input: ");
    }

    int max = numbers[0];
    int min = numbers[0];

    for(int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("%i %i\n", max, min);
        swap(&max , &min);
    printf("%i %i\n", max, min);}

void swap(int *max, int *min)
{
    int temp = *max;
    *max = *min;
    *min = temp;
}
