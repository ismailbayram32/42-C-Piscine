#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(!(str[n] >= 'A' && str[n] <= 'Z'))
        {
            return 0;
        }
        n++;
    }
    return 1;
}

int main()
{
    char *dizin = "BAYRAM";
    int a = ft_str_is_uppercase(dizin);
    printf("%d\n", a);
    return 0;
}