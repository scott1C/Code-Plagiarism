// hashmap.h

#ifndef HASHMAP_H
#define HASHMAP_H

#define SIZE 1000

typedef struct Entry
{
    char *key;
    char *value;
    struct Entry *next;
} Entry;

typedef struct
{
    Entry **entries;
} HashMap;

HashMap *createHashMap();
int hash(char *key);
void insert(HashMap *map, char *key, char *value);
char *search(HashMap *map, char *key);
void freeHashMap(HashMap *map);

#endif /* HASHMAP_H */
