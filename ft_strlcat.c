/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:02:00 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/08 14:34:23 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	size_t	size_src;

	size_src = ft_strlen(src);
	if (!dstsize && !dst)
		return (size_src);
	i = 0;
	size_dest = ft_strlen(dst);
	j = size_dest;
	if (dstsize <= size_dest)
		return (dstsize + size_src);
	while (src[i] != '\0' && dstsize - 1 - size_dest > i)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (size_dest + size_src);
}
