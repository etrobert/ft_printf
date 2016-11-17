/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:39:10 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/03 22:43:47 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	n;

	i = 0;
	n = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			n = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	if (s[n] == (char)c)
		return ((char *)(s + n));
	return (NULL);
}
