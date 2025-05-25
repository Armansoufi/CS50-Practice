#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n = get_int("number: ");

    int n2 = n * 2;

    printf("%i\n", n);
    printf("%i\n", n2);
    printf("%p\n", &n);
    printf("%p\n", &n2);
}
