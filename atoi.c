int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int total = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        total = (total * 10) + (str[i] - 48);
        i++;
    }
    return(total * sign);
}

#include <stdio.h>

int main()
{
    char s[] = "     -123ac4";
    printf("%d\n", ft_atoi(s));
}