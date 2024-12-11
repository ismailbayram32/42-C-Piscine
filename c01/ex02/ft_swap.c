#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    int b;

    a = 13;
    b = 32;
    ft_swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}