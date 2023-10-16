/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:51:16 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/11 11:39:37 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		num = -num;
		ft_putnbr(num);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	int = 0;
	while (par[i] != 0)
	{
		ft_putchar(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}























