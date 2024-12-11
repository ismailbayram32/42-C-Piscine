#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int n, i;
    i = 0;
    n = size - 1;

    while(n > i)
    {
        int temp = tab[n];
        tab[n] = tab[i];
        tab[i] = temp;
        n--;
        i++;
    }
}

int main()
{
    int n = 0;
    int size = 10;
    int dizi[] = {6, 7, 3, 4, 7, 2, 1, 0, 8, 18};
    ft_rev_int_tab(dizi, size);
    while(n < size)
    {
        printf("%d ", dizi[n]);
        n++;
    }
    return 0;
}
