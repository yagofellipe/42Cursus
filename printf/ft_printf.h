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

int	ft_d(int n);
int	ft_p(unsigned long ptr);
void	ft_putchar_fd(char c, int fd);
int	ft_s(char *str);
int	ft_u(unsigned int n);
int	ft_x(unsigned long num, const char format); 
int	ft_c(int c);
int	ft_printf(const char *format, ...);

#endif
