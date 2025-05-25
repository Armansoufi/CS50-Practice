#include <stdio.h>
#include <string.h>

#define TABLE_SIZE 5;

unsigned int hash(const char *word)
{
    unsigned int sum = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        sum += word[i];
    }
    return sum % TABLE_SIZE;
}

int main(void)
{
    char *word[] = {"car", "dog", "bee", "fish", "cow"};
    int size = sizeof(word) / sizeof(word[0]);

    for (int i = 0; i < size; i++)
    {
        unsigned int index = hash(word[i]);
        printf("word: %-5s -> Bucket: %u\n", word[i], index);
    }
    return 0;
}