#include "libft.h"

/*
** Etape I : Construction de la liste d'elems
** Chaque elem correspond a une portion de la chaine finale
** Ex : ft_printf("J'ai %d ans.", 42);
** se transforme en trois elem "J'ai " "42" et " ans."
**
** Etape II : Concatenation des elems entre eux
** POur ce faire la fonction de concatenation va d'abord devoir malloc
** Une grande chaine de characteres. POur ce faire, la taille finale est mise
** a jour a chaque ajout de elem lors de la construction de la liste
*/

typedef enum	e_ft_pri_spec;
{
	INT,
	STRING
}				t_ft_pri_spec;


typedef struct	elem
{
	char	*str;
	size_t	size;
	t_elem	*next;
}				t_elem;

typedef enum	s_ft_pri_sign
{
	DEFAULT,
	SIGN_ON,
	SPACE
}				t_ft_pri_sign;

typedef struct	s_args
{
	t_bool			left_justify;
	t_ft_pri_sign	sign;
	t_bool			sharp;
	t_bool			zero;

	int				min_size;

	int				precision;

	t_ft_pri_spec	sp;
}				t_args;

char	*concatenate(t_elem *first);

size_t	store(t_slist *par)
{
	if 
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_bool	mode;
	int		i;
	int		d;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (mode)
		{
			if (format[i] == 'd')
			{
				d = va_arg(ap, int);
				ft_putnbr(d);
			}
			mode = FALSE;
		}
		else if (format[i] == '%')
			mode = TRUE;
		else ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
