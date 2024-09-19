int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int size = ft_strlen(str);
    int swp;
    while(str[i] && i < size / 2)
    {
        swp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = swp;
        i++;
    }
    return(str);
}

#include <stdio.h>

int main()
{
    char s[] = "abcd";
    printf("%s\n", ft_strrev(s));
}