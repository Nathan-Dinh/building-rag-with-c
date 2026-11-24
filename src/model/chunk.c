#ifndef CHUNK // Guard to check if CHUNK is defined
#define CHUNK // Define CHUNK

#include <stddef.h>
#include "chunk.h"

struct Chunk chunk_create(size_t size) {
  struct Chunk c;
  c.size = &size;
  return c;
};

size_t chunk_get_size(struct Chunk *c) {
  return *(c->size);
};

int chunk_set_size(struct Chunk *c, size_t size) {
  *(c->size) = size;
  return size;
};
#endif;
