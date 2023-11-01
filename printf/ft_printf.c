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

void	verif(const char *p, va_list args)
{
	int	i;

	i = 0;
	if (*p == 'c')
		ft_c((int*)args);
	else if (*p == 's')
		ft_s((char*)args);
	else if (*p == 'p')
		ft_p((unsigned long*)args);
	else if (*p == 'd')
		ft_d((int*)args);
	else if (*p == 'i')
		ft_d((int*)args);
	else if (*p == 'u')
		ft_u((unsigned int*)args);
	else if (*p == 'x')
		ft_x((unsigned int*)args);
	else if(*p == 'X')
		ft_X((int*)args);	
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				verif(format, va_arg(format,args,));
			else if (*format == '%')
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (0);
}
