#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    *a = *a / *b; 
    *b = *a % *b;
}

int main()
{
    int a;
    int b;

    a = 7;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}