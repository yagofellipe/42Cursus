
#include <stdlib.h>
#include <unistd.h>
long int ft_len(int n)
{
	int	tam;
	
	tam = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		tam++;
		n = -n;
	}
	while (n != 0)
	{
		tam++;
		n /= 10;
	}
	return (tam);
}


char	*ft_itoa(int n)
{
	long int	len;
	char	*str;
	
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len--] = 48 + (n % 10);
		n = n /10;
	}
	return (str);
}

int	main()
{
	int	num;
	char	*novo;
	
	num = -16432131;
	novo = ft_itoa(num);
	
	write(1, novo, ft_len(num));

	return 0;
}
