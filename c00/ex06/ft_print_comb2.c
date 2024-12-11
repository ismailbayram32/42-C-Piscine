/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:23:39 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 18:23:40 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tekbasamak(int c)
{
	int	n;
	int	i;

	n = c;
	i = 0;
	i = n / 10;

	i += 48;
	if (c > 10)
		write(1, &i, 1);
	else
		write(1, "0", 1);
	i = c % 10;
	i += 48;
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			ft_tekbasamak(a);
			write (1, " ", 1);
			ft_tekbasamak(b);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	write (1, "\n", 1);
	return (0);
}
