int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(s1[i] - s2[i]);
}

#include <stdio.h>

int main()
{
    char s1[] = "abcz";
    char s2[] = "abca";
    printf("%d\n", ft_strcmp(s1, s2));
}