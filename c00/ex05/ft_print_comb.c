/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:54 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 18:22:30 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (49 <= b && b < 57)
		{
			while (50 <= c && c < 58)
			{
				if (a < b && b < c)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					if (a == 55 && b == 56 && c == 57)
						break ;
					else
						write(1, ",", 1);
				}
				else if (b < a && a < c)
				{
					write(1, &b, 1);
					write(1, &a, 1);
					write(1, &c, 1);
					write(1, ",", 1);
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
