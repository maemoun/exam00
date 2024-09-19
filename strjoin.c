#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strjoin(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int size = ft_strlen(s1) + ft_strlen(s2);
    char *str;
    str = malloc(size + 1);
    if (str == NULL)
        return(NULL);
    while(s1[i])
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return(str);
}

#include <stdio.h>

int main()
{
    char s1[] = "abcd";
    char s2[] = "efgh";
    printf("%s\n", ft_strjoin(s1, s2));
}