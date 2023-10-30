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

#include "libftprintf.h"



void	verif(char *p, va_list args)
{
	int	i;

	i = 0;
	if (*p == 'c')
		ft_c(args, int);
	else if (*p == 's')
		ft_s(args, char*);
	else if (*p == 'p')
		ft_p(args, void*);
	else if (*p == 'd')
		ft_d(args, int);
	else if (*p == 'i')
		ft_i(args, int);
	else if (*p == 'u')
		ft_u(args, unsigned int);
	else if (*p == 'x')
		ft_x(args, int);
	else if (*p == 'X')
		ft_X(args, int);
	else if (*p == '%')
		ft_percent();	
}

void	ft_c(va_list args)
{
	int	c;
	
	c = va_arg(args, int);
	ft_putchar(c);
		
}

int	ft_printf(const char *format, ...)
{
	const char *p
	va_list	args;

	va_start(args, format);
	p = format;
	while (*p)
	{
		
		
		p++;
	}
}
