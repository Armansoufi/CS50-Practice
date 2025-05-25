#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers = NULL;
    int count = 0;

    char more = 'y';

    while (more == 'y' || more == 'Y')
    {
        int *temp = realloc(numbers, (count + 1) * sizeof(int));
        if (temp == NULL)
        {
            printf("memory allocation failed\n");
            free(numbers);
            return 1;
        }

        numbers = temp;

        printf("Enter number %i: ", count + 1);
        scanf("%i", &numbers[count]);

        count++;

        printf("Add another number? (y/n): ");
        scanf(" %c", &more);
    }

    printf("You entered: ");
    for (int i = 0; i < count; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}
