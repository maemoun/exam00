#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strdup(char *src)
{
    int i = 0;
    int size = ft_strlen(src);
    char *str;
    str = malloc(size + 1);
    if (str == NULL)
        return(NULL);
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

#include <stdio.h>

int main()
{
    char s[] = "abcd";
    printf("%s\n", ft_strdup(s));
}