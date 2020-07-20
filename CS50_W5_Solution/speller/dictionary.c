// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Number of buckets in hash table
const unsigned int N = 143092;
int count = 0;

// Hash table
node *table[N];

//init empty table
// bool initHashTable(void)
// {
//     for (int i = 0; i < N; i++)
//     {
//         table[i] = NULL;
//     }
//     //empty table
//     return true;
// }

//prints table
// void printTable(void)
// {
//     printf("-----START-----\n");
//     for (int i = 0; i < N; i++)
//     {
//         if (table[i] == NULL)
//         {
//             printf("%i\t---- \n", i);
//         }
//         else
//         {
//             printf("%i\t", i);
//             //prints each value in the linked list
//             node *temp = table[i];
//             while (temp != NULL)
//             {
//                 printf("%s - ", temp->word);
//                 temp = temp->next;
//             }
//             printf("\n");
//         }
//     }
//     printf("-----END-----\n");
// }

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int hash_value = 5381;
    int c = 0;
    if (word == NULL)
    {
        exit(1);
    }

    for (c = 0; word[c] != '\0'; c++)
    {
        hash_value = hash_value * 33 + word[c];
    }
    return hash_value % N;
}

//inserting data in hashtable
bool hashTable_Insert(node *p)
{
    if (p == NULL)
    {
        return false;
    }
    int index = hash(p->word);
    //after hashing the function, generates an index
    p->next = table[index]; //persons next pointer points to the hashtable array
    table[index] = p;       //hashtable index value is set
    return true;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    FILE *loadDictionary = fopen(dictionary, "r");
    if (loadDictionary == NULL)
    {
        return false;
    }
    //char line[80];

    while (!feof(loadDictionary))
    {
        node *temp = (node *)calloc(1, sizeof(node));
        fscanf(loadDictionary, "%s", temp->word);
        hashTable_Insert(temp);
        count++;
    }
    //printTable();
    fclose(loadDictionary);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return count - 1;
}

// Returns true if word is in dictionary else false
//was checking for a single word at first, updated to checking in a loop for all
bool check(const char *word)
{
    int n = strlen(word);
    char checking[LENGTH + 1];
    for (int i = 0; i < n; i++)
    {
        checking[i] = tolower(word[i]);
    }
    checking[n] = '\0';

    int h = hash(checking);

    node *cursor = table[h];

    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, checking) == 0)
        {
            return true;
        }
        else
        {
            cursor = cursor->next;
        }
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *temp = table[i]; //temp to head
        node *prev = NULL;     //prev to null
        while (temp != NULL)
        {
            prev = temp->next; //tracking the prev
            free(temp);
            temp = prev;
        }
    }
    return true;
}
