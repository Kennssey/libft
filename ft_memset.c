/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourihi <mourihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:48:11 by mourihi           #+#    #+#             */
/*   Updated: 2022/12/10 15:47:15 by mourihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (b);
}
// int main()
// {
// 	//1337
// 	//010100111001
// 	//0011 1001 57
// 	//0000 0101 5
// 	//4242
// 	//0001 0000 1001 0010
// 	//1001 0010
// 	//0001 0000
// 	int tab[] = {1, 41};
// 	void *b = &tab;
// 	b = ft_memset(b,0,8);
// 	b = ft_memset(b,0,7);
// 	b = ft_memset(b,16,6);
// 	b = ft_memset(b,146,5);
// 	b = ft_memset(b,0,4);
// 	b = ft_memset(b,0,3);
// 	b = ft_memset(b,5,2);
// 	b = ft_memset(b,57,1);
// 	printf("%d \n%d", tab[0],tab[1]);
// }
