#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("how much:");
    int numbers[n];
    int count = 0;
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        numbers[i] = get_int("input: ");
    }

    for(int i = 0; i < n; i++)
        {
            if(numbers[i] > 0)
            {
                sum += numbers[i];
                count++;
            }
        }
        if(count > 0)
        {
        printf("Average of positive numbers:: %0.2f\n", sum / count);
        }
        else
        {
        printf("No positive numbers entered.\n");
        }

}
