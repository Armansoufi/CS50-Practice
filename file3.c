#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    FILE *file = fopen("card.raw", "rb");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    uint8_t buffer[512];

    while(fread(buffer, 1, 512, file) == 512)
    {
        if(buffer[0] == 0xff &&
            buffer[1] == 0xd8 &&
            buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
            {
                printf("Found JPEG block!\n");
            }
    }
    return 0;
}
