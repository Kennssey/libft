/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:05:06 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/08 17:46:41 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long		res;
	int				sign;
	unsigned int	i;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res >= 9223372036854775807)
		return (-1);
	if ((res * sign > 2147483647) || (res * sign < -2147483648))
		return (0);
	return ((int)res * sign);
}

	/*if (ft_strncmp(str, "2147483647", 11) == 0)
		return (2147483647);
	else if (ft_strncmp(str, "-2147483647", 12) == 0)
		return (-2147483647);
		
		if (res * sign >= 469762049)
		return (0);
	if (res * sign <= -469762049)
		return (-1);*/