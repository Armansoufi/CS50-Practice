#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("how many: ");
    scanf("%i", &n);

    int *numbers = malloc(n * sizeof(int));
    if (numbers == NULL)
    {
        printf("Memory allocate failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter number %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    printf("you entered: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
    }

    printf("\n");

    free(numbers);
    return 0;
}