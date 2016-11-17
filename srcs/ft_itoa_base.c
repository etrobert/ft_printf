/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:46:34 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/05 20:02:42 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int b)
{
	char	*str;
	int		i;

	if (n == FT_INT_MIN)
		return (ft_strdup(FT_INT_MIN_STR));
	i = ft_digits_base(n, b);
	if ((str = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n >= b)
	{
		str[i] = n % b + '0';
		i--;
		n /= b;
	}
	str[i] = n % b + '0';
	return (str);
}
