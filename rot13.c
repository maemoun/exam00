#include <unistd.h>

void rot13(char *str)
{
    int i = 0;
    while(str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'n') || (str[i] >= 'A' && str[i] <= 'N'))
        {
            str[i] += 13;
            write(1, &str[i], 1);
        }
        else if ((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'Z'))
        {
            str[i] -= 13;
            write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rot13(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}