#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(!(str[n] >= '0' && str[n] <= '9'))
        {
            return 0;
        }
        n++;
    }
    return 1;
}

int main()
{
    char *dizin = "3232323232";
    int a =ft_str_is_numeric(dizin);
    printf("%d\n", a);
    return 0;
}