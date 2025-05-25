#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("file.raw", "rb");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    uint8_t buffer[512];

    if(file != NULL)
    {
        fread(buffer, 1, 512, file);
    }
    
    for(int i = 0; i < 512; i++)
    {
        printf("%02x ", buffer[i]);
    }

    fclose(file);
    return 0;

}
