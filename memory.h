#ifndef _MEMORY_H_
#define _MEMORY_H_

#include <stdlib.h>

void *eipa_malloc(size_t size, const int line, const char *file);
void eipa_free(void **ptr, const int line, const char *file);
void *swap_bytes(void *source, void *dest, size_t num_bytes);

#define MALLOC(size) eipa_malloc((size), __LINE__, __FILE__)

#define FREE(ptr) eipa_free((void**)(&(ptr)), __LINE__, __FILE__)

#endif				/* _MEMORY_H_ */
