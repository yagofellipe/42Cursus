
#include "ft_printf.h"

int	ft_p(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_x(n, 'x');
	return (len);
}