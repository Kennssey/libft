/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:31:49 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/08 18:18:27 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	if (str1 == 0 && str2 == 0)
		return (0);
	if (str1 < str2)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len > 0)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
		return (str1);
	}
}
