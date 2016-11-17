/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:17:30 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/06 13:13:58 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_base_r(int n, int fd, int b)
{
	if (n < b)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	ft_putnbr_fd_base_r(n / b, fd, b);
	ft_putchar_fd(n % b + '0', fd);
}

void		ft_putnbr_fd_base(int n, int fd, int b)
{
	if (n == FT_INT_MIN)
	{
		ft_putstr_fd(FT_INT_MIN_STR, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	ft_putnbr_fd_base_r(n, fd, b);
}
