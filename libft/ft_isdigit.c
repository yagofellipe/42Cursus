#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	if (ft_isdigit('9') == 1)
		printf("é digito");
	return 0;
}
*/
