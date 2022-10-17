/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:03:55 by mourihi           #+#    #+#             */
/*   Updated: 2022/10/17 15:19:44 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dst;
	char	*sr;

	dst = (char *)dest;
	sr = (char*)src;
	i = 0;
	while (n > 0)
	{
		dst[i] = sr[i];
		i++;
		n--;
	}
	return(dest);
}
