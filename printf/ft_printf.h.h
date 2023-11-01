/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:54:16 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 11:54:19 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

void	ft_d((int) args);
void	ft_p(void *ptr);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_s(char *args);
void	ft_u(unsigned int args);
void	ft_c(char c);
int	ft_printf(const char *format, ...);

#endif
