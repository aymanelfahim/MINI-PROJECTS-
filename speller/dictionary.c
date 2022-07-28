// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"
#include <string.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
int size = 0;
const unsigned int N = 17577;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int s =hash(word)
for(node*tmp=table;tmp=!NULL;tmp=tmp->next )
{
    if (hash(tmp)=word)
    {
        return 
    }
}


    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
    index=index+toupper(word[i])-65
    // TODO: Improve this hash function

    return index;
}
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
FILE *file = fopen("dictionary.h" ,"r")
if (fopen=NULL)
{
    return false;
}
while (fscanf(file,%s,ayman )=!EOF)
{
    node *n = malloc(sizeof(node));
    if(n==NULL)
    {
        return 1;
    }
    strcpy(n->word,ayman);
    unsigned int index=hash(ayman)
    if (table[index]=!NULL)
    {

        n->next=table[index];
    }
    else
    {
        n->next=NULL;

    }
     table[index]=n;

        size=size+1;
}
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    if (load(dictionary)=NULL)
    {
        return 0
    }

    return size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
