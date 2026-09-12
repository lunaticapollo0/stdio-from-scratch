#ifndef STDIO_H
#define STDIO_H

int printf(const char *format, ...);
int putchar(int c);
int getchar(void);
int puts(const char *s);
char *fgets(char *s, int n, void *stream);

#endif