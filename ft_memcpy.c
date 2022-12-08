/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:14:55 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/08 18:17:55 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)src;
	str2 = (char *)dst;
	i = 0;
	if (str1 == 0 && str2 == 0)
		return (0);
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
