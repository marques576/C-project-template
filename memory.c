/**
 * @file memory.c
 * @brief Macros to wrap dynamic memory calls (malloc, free)
 *
 * Macros to handle dynamic memory calls (malloc and free). The macros have
 * some error detection and report.
 * @version 2
 */
#include <stdio.h>
#include <stdlib.h>

#include "memory.h"

void *eipa_malloc(size_t size, const int line, const char *file) {
	void *ptr = malloc(size);
	if( ptr == NULL ) {
		fprintf(stderr, "[%d@%s][ERROR] can't malloc %zu bytes\n",
			       	line, file, size);
	}
	return ptr;
}

void eipa_free(void **ptr, const int line, const char *file) {
	(void)line;
	(void)file;
	free(*ptr);
	*ptr = NULL;
}

void *swap_bytes(void *source, void *dest, size_t num_bytes) {
    unsigned char *source_p = (unsigned char*)source;
    unsigned char *dest_p = (unsigned char*)dest;

    for(size_t i = 0; i < num_bytes;i++){
        dest_p[i] = source_p[num_bytes-i-1];
    }
    return dest_p;
}
