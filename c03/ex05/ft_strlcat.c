/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:14:19 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 17:17:02 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int n = 0, i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0' && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}

	dest[n] = '\0';
	return (dest);
}


unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = ft_strlen(dest);
	b = ft_strlen(src);

	if (size <= a)
		return (size + b);
	ft_strncat(dest, src, size - a - 1);

	dest[size - 1] = '\0';

	return (a + b);
}

int	main(void)
{
	char a[20] = "Ismail";
	char b[] = "Bayram";
	printf("%i\n", ft_strlcat(a, b, 10));
	printf("%s\n", a);
	return (0);
}
