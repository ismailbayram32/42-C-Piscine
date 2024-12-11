#include<stdio.h>

int ft_str_is_printable(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(!(str[n] >= 32 && str[n] <= 126))
        {
            return 0;
        }
        n++;
    }
    return 1;
}

int main()
{
    char *dizin = "<,;:.-_^<#'! ";
    int a = ft_str_is_printable(dizin);
    printf("%d\n", a);
    return 0;
}
