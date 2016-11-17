/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:31:11 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/05 19:44:18 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digits_base(int n, int b)
{
	int		d;

	if (n == FT_INT_MIN)
		return (FT_INT_MIN_DIG);
	d = 0;
	if (n < 0)
	{
		d++;
		n = -n;
	}
	while (n >= b)
	{
		n /= b;
		d++;
	}
	return (d + 1);
}
