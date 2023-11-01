/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:58:43 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/30 11:58:46 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	verif(const char *p, void *args)
{
	int	i;

	i = 0;
	if (*p == 'c')
		i += ft_c((int)arg);
	else if (*p == 's')
		i += ft_s((char *)arg);
	else if (*p == 'p')
		i += ft_p((unsigned long)arg, 87);
	else if (*p == 'd')
		i += ft_d((int)arg);
	else if (*p == 'i')
		i += ft_d((int)arg);
	else if (*p == 'u')
		i += ft_u((unsigned int)arg);
	else if (*p == 'x')
		i += ft_x((unsigned int)arg, 87);
	else if (*p == 'X')
		i += ft_X((unsigned int)arg, 55);
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
				i += verif(format, va_arg(args, void *));
			else if (*format == '%')
				i += verif('%');
		}
		else
			i = i + print_char(*format);
		format++;
	}
	va_end(args);
	return (i);
}