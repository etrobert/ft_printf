/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:41:34 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/03 15:41:59 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char*)s1) - *((unsigned char*)s2) != 0)
			return (*((unsigned char*)s1) - *((unsigned char*)s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
