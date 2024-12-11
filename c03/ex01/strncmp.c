#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while((s1[i] != '\0' || s2[i] != '\0') && i < n )
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    
    return 0;
}

int main()
{
    char a[] = "Ahmet1";
    char b[] = "Ahmet2";
    int x = ft_strncmp(a, b, 6);
    printf("%d\n", x);
    return 0;
}