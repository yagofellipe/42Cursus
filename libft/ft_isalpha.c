#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return 0;
}

/*
#include <stdio.h>
int	main()
{
	int	test;

	if (ft_isalpha('a') == 1)
		printf("é alpha");
	return 0;
}
*/
