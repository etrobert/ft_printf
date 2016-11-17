/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:43:00 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/15 16:18:32 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SLIST_H
# define FT_SLIST_H

# include <stdlib.h>
# include "ft_bool.h"

typedef t_bool	(*t_f_comp)(void *, void *);
typedef void	(*t_f_action)(void *);

typedef struct	s_slist
{
	void			*content;
	struct s_slist	*next;
}				t_slist;

void			ft_slist_push_front(t_slist **ptr, void *content);
void			*ft_slist_find(t_slist *slist, void *ref, t_f_comp f);
void			ft_slist_remove(t_slist **slist, void *content);

void			ft_slist_apply(t_slist *slist, void (*f)(void *));
int				ft_slist_count_if(t_slist *slist, t_bool (*f)(void *));

#endif
