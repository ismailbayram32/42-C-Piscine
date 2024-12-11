/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:12:08 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 18:12:10 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}

}

int	main(void)
{
	char	*a;

	a = "asdads";
	ft_putstr(a);
	return (0);
}
