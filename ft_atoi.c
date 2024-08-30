int ft_atoi(const char *str)
{
    int i;
    int sign;
    int total;
    i = 0;
    sign = 1;
    total = 0;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        total = (total * 10) + (str[i] - 48);
        i++;
    }
    return(total * sign);
}