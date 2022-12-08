/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:30:39 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/08 00:53:57 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_lenth(long n)
{
	int	lenth;

	lenth = 0;
	if (n <= 0)
	{
		n = -n;
		lenth++;
	}
	while (n > 0)
	{
		n /= 10;
		lenth++;
	}
	return (lenth);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	int		lenth;

	i = n;
	lenth = ft_lenth(i);
	str = (char *)malloc(sizeof(char) * (lenth + 1));
	if (!str)
		return (0);
	str[lenth] = '\0';
	if (i == 0)
		str[0] = '0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	while (i > 0)
	{
		str[lenth - 1] = i % 10 + '0';
		i /= 10;
		lenth--;
	}
	return (str);
}
