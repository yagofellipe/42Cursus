#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_len(int n)
{
	int	tam;
	
	tam = 0;
	while (n == 0)
		return (1);
	while (n != 0)
	{
		tam++;
		n /= 10;
	}
	return tam;
}

char	*ft_itoa(int n)
{
	int	i;
	int	len;
	char	num;
	char	*str;
	
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1)); 
	if (str == NULL)
		return NULL;
	i = 0;
	while (len > 0)
	{
		num = n/10 + '0';
		str[i] = num;
		n /= 10;
		len--;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	int	num;
	char	*novo;
	
	num = 100;
	novo = ft_itoa(num);
	
	write(1,&novo[0], 1);
	write(1,&novo[0], 2);
	write(1,&novo[0], 3);

	return 0;
}
