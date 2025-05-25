#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("how much:");
    int numbers[n];

    for(int i = 0; i < n; i++)
    {
        numbers[i] = get_int("input: ");
    }


    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];

    for(int i = 0; i < n; i++)
    {
        sum += numbers[i];

        if(numbers[i] > max)
        {
            max = numbers[i];
        }
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    float average = sum / (float) n;
    printf("average: %0.2f\n", average);
    printf("min: %i\n", min);
    printf("max: %i\n", max);



}
