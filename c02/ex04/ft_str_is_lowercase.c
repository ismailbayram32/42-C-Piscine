#include<stdio.h>

int ft_str_is_lowercase(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(!(str[n] >= 'a' && str[n] <= 'z'))
        {
            return 0;
        }
        n++;
    }
    return 1;
}

int main()
{
    char *dizin = "bayram";
    int a = ft_str_is_lowercase(dizin);
    printf("%d\n", a);
    return 0;
}