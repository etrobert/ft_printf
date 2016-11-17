/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:53:54 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/06 21:08:26 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_strtrim_isblank(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static int		ft_strtrim_len(char const *s)
{
	int	n;
	int	last;

	n = 0;
	last = 0;
	while (s[n] != '\0')
	{
		if (!ft_strtrim_isblank(s[n]))
			last = n;
		n++;
	}
	return (last + 1);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*res;
	int		size;

	if (s == NULL)
		return (NULL);
	while (ft_strtrim_isblank(*s))
		s++;
	size = ft_strtrim_len(s);
	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
