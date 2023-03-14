#ifndef DEBUG_H
#define DEBUG_H

void debug(const char *file, const int line, char *fmt, ...);
void warning(const char *file, const int line, char *fmt, ...);
void error(const char *file, const int line, int exitCode, char *fmt, ...);
void show_bytes(char *ptr, size_t num_bytes);

#define DEBUG(...) debug(__FILE__, __LINE__, __VA_ARGS__)

#define WARNING(...) warning(__FILE__, __LINE__, __VA_ARGS__)

#define ERROR(exitCode, ...) \
	error(__FILE__, __LINE__, (exitCode), __VA_ARGS__)

#endif				/* DEBUG_H */
