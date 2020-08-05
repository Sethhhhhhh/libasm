#include "../includes/libasm.h"

#include <libc.h>
#include <fcntl.h>

int     main(int ac, char **av)
{
    (void)ac;
    (void)av;
    //printf("%zu\n", ft_strlen("50000"));

    // printf("\n---------------------\n\n");
    // printf("STRCMP -> %d\n", strcmp("600", "523"));
    // printf("FT_STRCMP -> %d\n", ft_strcmp("600", "523"));
    // printf("\n---------------------\n\n");

    // printf("\n---------------------\n\n");
    // char* s = ft_strcpy(malloc(10), "test");
    // printf("FT_STRCPY -> %s\n", s);
    // s = strcpy(malloc(10), "test");
    // printf("STRCPY -> %s\n", s);
    // printf("\n---------------------\n\n");

    // printf("\n---------------------\n\n");
    // char* t = ft_strdup("salut les gamers");
    // printf("FT_STRDUP -> %s\n", t); 
    // t = strdup("salut les gamers");
    // printf("STRDUP -> %s\n", t); 
    // printf("\n---------------------\n\n");
    
    printf("\n---------------------\n\n");
    int file = open("srcs/test.txt", O_RDWR);
    printf("FILE ID -> %d\n", file);
    char *s = (char *)malloc(50);
    printf("READ RET -> %zd\n", ft_read(file, s, 50));
    printf("CONTENT -> %s\n\n", s);

    int file2 = open("srcs/test.txt", O_RDWR);
    printf("FILE ID -> %d\n", file2);
    char *s2 = (char *)malloc(50);
    printf("READ RET -> %zd\n", read(file2, s2, 50));
    printf("CONTENT -> %s\n", s2);
    printf("\n---------------------\n\n");

    return (0);
}