/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:31:54 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 17:32:48 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int n = 0, i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}

	dest[n] = '\0';
	return (dest);
}

int	main(void)
{
	char a[50] = "My name is: ";
	char b[] = "Ismail";
	char * x = ft_strcat(a, b);
	printf ("%s\n", x);
	return (0);
}
