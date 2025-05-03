#include <cs50.h>
#include <stdio.h>

int main() {
    int number[5];
    
    for (int i = 0; i < 5; i++) {
        number[i] = get_int("number: ");
    }
    
    int max = number[0];
    for (int i = 1; i < 5; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }
    
    printf("biggest number: %i\n", max);
}
