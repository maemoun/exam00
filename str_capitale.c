#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j = 1;
    if (ac >= 2)
    {
        while(j < ac)
        {
            i = 0;
            if (av[j][i] >= 'a' && av[j][i] <= 'z')
            {
                av[j][i] -= 32;
                write(1, &av[j][i], 1);
            }
            while (av[j][i])
            {
                while (av[j][i] == ' ' || av[j][i] == '\t')
                {
                    if (av[j][i + 1] >= 'a' && av[j][i + 1] <= 'z')
                    {
                        av[j][i + 1] -= 32;
                        write(1, &av[j][i], 1);
                        break;
                    }
                    i++;
                }
                i++;
            }
            write(1, "\n", 1);
            j++;
        }
    }
    else
        write(1, "\n", 1);
}