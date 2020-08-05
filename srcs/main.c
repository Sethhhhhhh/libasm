#include "../includes/libasm.h"

#include <libc.h>
#include <fcntl.h>

int     main(void)
{
    printf("-----------------------------------------------------------\n");
    printf("| ft_strlen | Input = Hello                               |\n");
    printf("-----------------------------------------------------------\n\n");

    printf(" [ft_strlen] Output = %zu\n", ft_strlen("Hello"));
    printf(" [strlen] Output = %zu\n", strlen("Hello"));
    
    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strcmp | Input = 600, 523                            |\n");
    printf("-----------------------------------------------------------\n\n");

    printf(" [ft_strcmp] Output = %d\n", ft_strcmp("600", "523"));
    printf(" [strcmp] Output = %d\n", strcmp("600", "523"));

    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strcpy | Input = malloc(5), test                     |\n");
    printf("-----------------------------------------------------------\n\n");

    char* s = ft_strcpy(malloc(5), "test");
    printf(" [ft_strcpy] Output = %s\n", s);
    s = strcpy(malloc(5), "test");
    printf(" [strcpy] Output = %s\n", s);

    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strdup | Input = Hello World                         |\n");
    printf("-----------------------------------------------------------\n\n");

    char *sdup = ft_strdup("Hello World");
    printf(" [ft_strdup] Output = %s\n", sdup); 
    char *sdup2 = strdup("Hello World");
    printf(" [strdup] Output = %s\n", sdup2); 
    
    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_read | Input = srcs/test.txt, s2, 50                 |\n");
    printf("-----------------------------------------------------------\n\n");

    int fileread = open("srcs/test.txt", O_RDWR);
    printf(" [ft_read] Output_01 = %d\n", fileread);
    char *sread = (char *)malloc(50);
    printf(" [ft_read] Output_02 = %zd\n", ft_read(fileread, sread, 50));
    printf(" [ft_read] Output_03 = %s\n", sread);
    close(fileread);

    int fileread2 = open("srcs/test.txt", O_RDWR);
    printf(" [read] Output_01 = %d\n", fileread2);
    char *sread2 = (char *)malloc(50);
    printf(" [read] Output_02 = %zd\n", read(fileread2, sread2, 50));
    printf(" [read] Output_03 = %s\n", sread2);
    close(fileread2);

    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_write | Input = srcs/test.txt, Hello World, 11       |\n");
    printf("-----------------------------------------------------------\n\n");
    
    int filewrite = open("srcs/test.txt", O_RDWR);
    printf(" [ft_write] Output_01 = %d\n", filewrite);
    char swrite[11] = "Hello World";
    printf(" [write] Output_02 = %zd\n", write(filewrite, swrite, 11));
    close(filewrite);

    int filewrite2 = open("srcs/test.txt", O_RDWR);
    printf(" [write] Output_01 = %d\n", filewrite2);
    char swrite2[11] = "Hello World";
    printf(" [write] Output_02 = %zd\n", write(filewrite2, swrite2, 11));
    close(filewrite2);

    return (0);
}