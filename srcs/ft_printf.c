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

typedef struct	elem
{
	char	*str;
	size_t	size;
	t_elem	*next;
}				t_elem;

char	*concatenate(t_elem *first);

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
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
