#include "ft_printf.h"

void ft_putchar_fd(char c, int fd) 
{
    write(fd, &c, 1);
}

int	ft_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);	
}
