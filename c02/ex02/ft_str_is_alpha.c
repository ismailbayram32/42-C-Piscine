#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(!((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z')))
        {
            return 0;
        }
        n++;
    }
    return 1;
}

int main()
{
    char *dizin = "Bayram";
    int a = ft_str_is_alpha(dizin);
    printf("%d\n", a);
    return 0;
}
