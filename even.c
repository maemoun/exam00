#include <unistd.h>

int ft_strlen(char *str)
{
    int  i = 0;
    while(str[i])
        i++;
    return(i);
}

void even(char *str)
{
    int i = 0;
    int size = ft_strlen(str);
    while(str[i] && i < size)
    {
        if (i % 2 == 0)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main()
{
    char s[] = "abcd";
    even(s);
}