#include "includes/libasm.h"

#include <libc.h>

int     main(int ac, char **av)
{
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

    char* t = ft_strdup("salut les gamers");
    printf("%s", t); 

    return (0);
}