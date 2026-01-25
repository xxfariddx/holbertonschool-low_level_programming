#ifndef "HASH_TABLES_H"
#define "HASH_TABLES_H"

hash_table_t *hash_table_create(unsigned long int size);

typedef struct hash_table_s
{
    unsigned long int size;
    struct hash_node_s **array; 
} hash_table_t;

#endif