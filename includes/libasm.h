#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <errno.h>

ssize_t	ft_write(int fd, const void *buf, size_t n);
ssize_t	ft_read(int fd, void *buf, size_t n);
size_t  ft_strlen(const char *str);
char    *ft_strcpy(char * dst, const char * src);
char    *ft_strdup(const char *s1);
int     ft_strcmp(const char *s1, const char *s2);

#endif