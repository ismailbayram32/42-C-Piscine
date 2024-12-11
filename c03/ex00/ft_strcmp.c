#include<stdio.h>

int ft_strlen(char *str)
{
    int a;
    a = 0;

    while(str[a] != '\0')
    {
        a++;
    }
    return a;
}

int ft_strcmp(char *s1, char *s2)
{
    int a, b, n = 0;
    a = ft_strlen(s1);
    b = ft_strlen(s2);

    while(s1[n] && s2[n])
    {
        if(s1[n] != s2[n])
        {
            return s1[n] - s2[n];
        }
        n++;
    }

    if (a != b)
    {
        return s1[n] - s2[n];
    }

    return 0;
}

int main()
{
    char a[] = "Ahmet1";
    char b[] = "Ahmet";
    int x = ft_strcmp(a, b);
    printf("%d\n", x);
    return 0;
}
