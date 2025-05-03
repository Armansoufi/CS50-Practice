#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int number[] = {9, 10, 32, 12, 2, 44};
    int n = 6;
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%i ", number[i]);
    }
    printf("\n");

}
