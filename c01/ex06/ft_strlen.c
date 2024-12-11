/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismbyrm32 <ismbyrm32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:34:16 by ismbyrm32         #+#    #+#             */
/*   Updated: 2024/07/10 17:34:17 by ismbyrm32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;

	while (str[a])
	{
		a++;
	}
	return (a);
}

int	main(void)
{
	char dizi[] = "Merhaba Dunya!";
	int a = ft_strlen(dizi);
	printf("%d\n", a);
	return 0;
}
