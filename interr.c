#include <unistd.h>

int ft_search(char c, char *str)
{
    int i = 0;
    while(str[i])
    {
        if (c == str[i])
            return(0);
        i++;
    }
    return(1);
}

int ft_double(char c, char *str, int n)
{
    if (n == 0)
        return(1);
    while(n >= 0)
    {
        if (c == str[n - 1])
            return(0);
        n--;
    }
    return(1);
}

void    ft_inter(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    {
        if( ft_search(s1[i], s2) == 0)
        {
            if (ft_double(s1[i], s1, i) == 1)
                write(1, &s1[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_inter(av[1], av[2]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}