#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_rev_print(char *str)
{
    int size = ft_strlen(str);
    size--;
    while (str[size])
    {
        write(1, &str[size], 1);
        size--;
    }
    return(str);
}

int main()
{
    char s[] = "abcd";
    ft_rev_print(s);
}