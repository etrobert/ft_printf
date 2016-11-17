/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:39:36 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/03 15:40:13 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_t;
	char	*src_t;

	dest_t = (char*)dest;
	src_t = (char*)src;
	while (n > 0)
	{
		*dest_t = *src_t;
		dest_t++;
		if (*src_t == c)
			return (dest_t);
		src_t++;
		n--;
	}
	return (NULL);
}
