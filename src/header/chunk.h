#ifndef CHUNK_H
#define CHUNK_H

struct Chunk {
  size_t *size;
};

struct Chunk chunk_create(size_t size);
size_t chunk_get_size(struct Chunk *c);
int chunk_set_size(struct Chunk *c, size_t size);

#endif // CHUNK_H