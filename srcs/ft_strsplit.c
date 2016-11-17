/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:27:49 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/08 15:40:29 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_word_len(const char *s, char c)
{
	int	n;

	n = 0;
	while (s[n] != c && s[n] != '\0')
		n++;
	return (n);
}

static const char	*ft_next_word(const char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

static char			*ft_get_word(const char *s, char c)
{
	char	*res;
	int		i;

	if ((res = malloc(sizeof(char) * (ft_word_len(s, c) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int			ft_count_words(const char *s, char c)
{
	int	n;

	if (s == NULL)
		return (-1);
	n = 0;
	while (*s != '\0')
	{
		s = ft_next_word(s, c);
		n++;
	}
	return (n);
}

char				**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	if ((tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		tab[i] = ft_get_word(s, c);
		s = ft_next_word(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
