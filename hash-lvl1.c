#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TABLE_SIZE 26

typedef struct node
{
    char word[50];
    struct node *next;

} node;

node *table[TABLE_SIZE] = {0};

unsigned int hash(const char *word)
{
    unsigned int t = NULL;

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
