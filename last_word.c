#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

void last_word(char *str)
{
    int size = ft_strlen(str);
    size--;
    while (str[size] && (str[size] == ' ' || str[size] == '\t'))
        size--;
    while (str[size] && !(str[size] == ' ' || str[size] == '\t'))
        size--;
    if (str[size] && (str[size] == ' ' || str[size] == '\t'))
        size++;
    while (str[size] && !(str[size] == ' ' || str[size] == '\t'))
    {
        write(1, &str[size], 1);
        size++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        last_word(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}