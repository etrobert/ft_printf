#include "libft.h"

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
