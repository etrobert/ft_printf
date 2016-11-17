/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:49:28 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/04 16:58:54 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	j;

	if (*big == '\0' && *little == '\0')
		return ((char*)big);
	while (*big != '\0')
	{
		j = 0;
		while (big[j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char*)big);
		big++;
	}
	return (NULL);
}
