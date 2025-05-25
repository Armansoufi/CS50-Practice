#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

unsigned int hash(const char *word);
bool insert(const char *word);
bool search(const char *word);
#define TABLE_SIZE 26

int main(void)
{
    insert("cat");
    insert("dog");
    insert("apple");

    char input[50];
    printf("Enter a word to search: ");
    scanf("%49s", input);

    if (search(input))
    {
        printf("Found: %s\n", input);
    }
    else
    {
        printf("NOT FOUND: %s\n", input);
    }
    return 0;
}

typedef struct node
{
    char word[50];
    struct node *next;

} node;

node *table[TABLE_SIZE] = {0};

unsigned int hash(const char *word)
{

    return toupper(word[0]) - 'A';
}

bool insert(const char *word)
{
    unsigned int index = hash(word);

    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return false;
    }

    strcpy(new_node->word, word);
    new_node->next = table[index];
    table[index] = new_node;

    return true;
}

bool search(const char *word)
{
    unsigned int index = hash(word);

    node *coursor = table[index];

    while (coursor != NULL)
    {
        if (strcasecmp(coursor->word, word) == 0)
        {
            return true;
        }
        coursor = coursor->next;
    }

    return false;
}