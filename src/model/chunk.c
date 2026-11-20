#ifndef CHUNK_H // Guard to check if CHUNK_H is defined
#define CHUNK_H // dDefine CHUNK_H

#include <stddef.h>

    struct Chunk {
        char *text;
        unsigned int *size;
    };


    struct Chunk chunk_create(const char *text, size_t size){
        struct Chunk c;

        c.text = size

        memcpy(c.text, text, size);
        c.text[size] = '\0'; // Null-terminate the string
        c.size = size;
        return c;
    };

    size_t chunk_get_size(Chunk *c){

    };

    int chunk_set_size(Chunk *c, size_t size){
        c->size = size;
        return size;
    };

    const char *chunk_get_text(Chunk *c){

    };

#endif;