#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

extern ssize_t	ft_write(int fd, const void *buf, size_t n);
extern ssize_t	ft_read(int fd, void *buf, size_t n);
extern size_t  ft_strlen(const char *str);
extern char    *ft_strcpy(char * dst, const char * src);
extern char    *ft_strdup(const char *s1);
extern int     ft_strcmp(const char *s1, const char *s2);

#endif
