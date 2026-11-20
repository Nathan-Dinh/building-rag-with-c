#ifndef CHUNK_H // Guard to check if CHUNK_H is defined
#define CHUNK_H // dDefine CHUNK_H

#include <stddef.h>

    struct Chunk {
        char *text;
        unsigned int *size;
    };


    Chunk *chunk_create(const char *text, size_t size){
        Chunk c;

        Chunk c.text = malloc(size + 1);     
        Chunk c.size = size;
        return &c; 
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