#include <cs50.h>
#include <stdio.h>

int main() {
    int n = get_int("number: ");
    
    if (n > 10) {
        printf("عدد بزرگ است\n");
    } else {
        printf("عدد کوچک است\n");
    }
}
