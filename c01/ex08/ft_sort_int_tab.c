#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0, j = 0, temp;

    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int n = 0;
    int size = 8;
    int dizi[] = {6, 8, 3, 1, 9, 13, 45, 21};
    ft_sort_int_tab(dizi, size);
    while(n < size)
    {
        printf("%d ", dizi[n]);
        n++;
    }
    return 0;
}
