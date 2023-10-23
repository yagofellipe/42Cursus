/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:12 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 12:58:14 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{		
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = nb * (-1);
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar(nb + '0', fd);
}
/*
int main() {
    int n = 1852;
    int fd = 1; // 1 is the file descriptor for standard output (stdout)

    ft_putnbr_fd(n, fd);
    return 0;
}*/
