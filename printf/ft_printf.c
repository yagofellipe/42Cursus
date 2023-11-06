/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:42:50 by yfellipe          #+#    #+#             */
/*   Updated: 2023/11/06 10:42:54 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

static int	verif(va_list args, const char *format)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_c(va_arg(args, int));
	else if (*format == 's')
		i += ft_s(va_arg(args, char *));
	else if (*format == 'p')
		i += ft_p(va_arg(args, unsigned long long));
	else if (*format == 'd' || *format == 'i')
		i += ft_d(va_arg(args, int));
	else if (*format == 'u')
		i += ft_u(va_arg(args, unsigned int));
	else if (*format == 'x')
    		i += ft_x(va_arg(args, unsigned int), 'x');
	else if (*format == 'X')
    		i += ft_x(va_arg(args, unsigned int), 'X');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += verif(args, format);
			else if (*format == '%')
				i += ft_c('%');
		}
		else
			i = i + ft_c(*format);
		format++;
	}
	va_end(args);
	return (i);
}
