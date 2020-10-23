#include "../includes/libasm.h"

int     main(void)
{
    printf("-----------------------------------------------------------\n");
    printf("| ft_strlen											      |\n");
    printf("-----------------------------------------------------------\n\n");

    printf(" [ft_strlen] Output = %zu\n", ft_strlen("Hello"));
    printf(" [strlen] Output = %zu\n", strlen("Hello"));
    printf(" [ft_strlen] Output = %zu\n", ft_strlen("abcdefghijklmnopqrstu\
vwxyzabcdefghijklmnopqrstuvwxyz"));
    printf(" [strlen] Output = %zu\n", strlen("abcdefghijklmnopqrstu\
vwxyzabcdefghijklmnopqrstuvwxyz"));

	printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strcmp											      |\n");
    printf("-----------------------------------------------------------\n\n");

	printf(" [ft_strcmp] Output = %d\n", ft_strcmp("", ""));
    printf(" [strcmp] Output = %d\n", strcmp("", ""));	
    printf(" [ft_strcmp] Output = %d\n", ft_strcmp("", "523"));
    printf(" [strcmp] Output = %d\n", strcmp("", "523"));
	printf(" [ft_strcmp] Output = %d\n", ft_strcmp("523", ""));
    printf(" [strcmp] Output = %d\n", strcmp("523", ""));

    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strcpy											      |\n");
    printf("-----------------------------------------------------------\n\n");

    char *s = ft_strcpy((char *)malloc(sizeof(char) * 5), "test");
    printf(" [ft_strcpy] Output = %s\n", s);
	s = strcpy(malloc(5), "test");
    printf(" [strcpy] Output = %s\n", s);
	s = ft_strcpy(malloc(5), "abcdefghijklmnopqrstu\
vwxyzabcdefghijklmnopqrstuvwxyz");
    printf(" [ft_strcpy] Output = %s\n", s);
    s = strcpy(malloc(5), "abcdefghijklmnopqrstu\
vwxyzabcdefghijklmnopqrstuvwxyz");
    printf(" [strcpy] Output = %s\n", s);
	free(s);
	
    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_strdup											      |\n");
    printf("-----------------------------------------------------------\n\n");

    char *sdup = ft_strdup("");
    printf(" [ft_strdup] Output_01 = %s\n", sdup);
    char *sdup2 = strdup("");
    printf(" [strdup] Output_01 = %s\n", sdup2);
	sdup = ft_strdup("adoajdioahefiuehfuihsefiuhesaufhseaufhasjehfusehfiuaes");
    printf(" [ft_strdup] Output_02 = %s\n", sdup);
    sdup2 = strdup("adoajdioahefiuehfuihsefiuhesaufhseaufhasjehfusehfiuaes");
    printf(" [strdup] Output_02 = %s\n", sdup2);
 
    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_read										          |\n");
    printf("-----------------------------------------------------------\n\n");
	
	char buf[255];
	char buf2[255];
	printf(" [ft_read] Output_01 = %ld\n", ft_read(1, buf, 255));
	printf(" [read] Output_01 = %ld\n", read(1, buf2, 255));
	int fd = open("srcs/test/ft_read", O_RDONLY);
	printf(" [ft_read] Output_02 = %ld\n", ft_read(fd, buf, 255));
	close(fd);
	fd = open("srcs/test/read", O_RDONLY);		
	printf(" [read] Output_02 = %ld\n", read(fd, buf, 255));
	close(fd);
	printf(" [ft_read] Output_03 = %ld\n", ft_read(-2, buf, 255));
	printf(" [read] Output_03 = %ld\n", read(-2, buf, 255));

    printf("\n\n-----------------------------------------------------------\n");
    printf("| ft_write                                                |\n");
    printf("-----------------------------------------------------------\n\n");
    
	printf(" [ft_write] Output_01 = %ld\n", ft_write(1, "test", 4));
	printf(" [write] Output_01 = %ld\n", write(1, "test", 4));
	fd = open("srcs/test/ft_write", O_WRONLY);	
	printf(" [ft_write] Output_02 = %ld\n", ft_write(fd, "test", 4));
	close(fd);
	fd = open("srcs/test/write", O_WRONLY);	
	printf(" [write] Output_02 = %ld\n", write(fd, "test", 4));
	close(fd);	
	printf(" [ft_write] Output_03 = %ld\n", write(-2, "test", 4));
	printf(" [write] Output_03 = %ld\n", write(-2, "test", 4));
    return (0);
}
