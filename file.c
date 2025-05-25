#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("usage ./file file\n");
        return 1;
    }

    FILE *card = fopen(argv[1], "rb");
    if (card == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }

    FILE *copy = fopen("card.raw", "wb");
    if (copy == NULL)
    {
        printf("Could not create output file.\n");
        fclose(card);
        return 1;
    }

    uint8_t buffer[512];

    while (fread(buffer, sizeof(uint8_t), 512, card) == 512)
    {
        fwrite(buffer, sizeof(uint8_t), 512, copy);
    }

    fclose(card);
    fclose(copy);
    return 0;
}
