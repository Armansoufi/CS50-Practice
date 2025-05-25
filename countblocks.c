#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 512


int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./countblocks filename\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if(file == NULL)
    {
        printf("could not open file%s.\n", argv[1]);
        return 1;
    }

    unsigned char buffer[BLOCK_SIZE];
    int block_count = 0;

    while(fread(buffer, sizeof(unsigned char), BLOCK_SIZE, file) == BLOCK_SIZE)
    {
        block_count++;
    }

    if(!feof(file))
    {
        printf("an error occurred while reading the file.\n");
    }
    else if(ftell(file) % BLOCK_SIZE != 0)
    {
            block_count++;
    }

    printf("Total 512-byte blocks: %d\n", block_count);

    fclose(file);
    return 0;
}
