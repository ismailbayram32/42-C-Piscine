/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:04:07 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 17:12:09 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n = 0, i = 0;

	if (to_find[n] == '\0')
		return (0);
	while (str[n])
	{
		if (str[n] == to_find[0])
		{
			i = 0;
			while (str[n + i] == to_find[i] && to_find[i] != '\0')
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (str + n);
		}
		n++;
	}
	return (0);
}

int	main(void)
{
	char	a[] = "ahmet";
	char	b[] = "e";
	char	*x = ft_strstr(a, b);
	printf ("%s içinde aranan değer: %s \n", a, x);
	return (0);
}
