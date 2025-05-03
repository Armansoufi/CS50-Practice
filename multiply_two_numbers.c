#include <cs50.h>
#include <stdio.h>

int main() {
    int number[2];
    
    for (int i = 0; i < 2; i++) {
        number[i] = get_int("number: ");
    }
    
    int zarb = number[0] * number[1];
    printf("zarb: %i\n", zarb);
}
