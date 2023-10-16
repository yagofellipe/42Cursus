#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) 
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);	
}
/*
#include <stdio.h>
int	main()
{
	if (ft_isalnum('9') == 1)
		printf("é digito");
	if (ft_isalnum('a') == 1)
		printf("é alpha");
	return 0;
}
*/
