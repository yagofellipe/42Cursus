
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
#include <stdio.h>
int main()
{
	int test = ft_len(200);
	printf("%d",test);
	return 0;
}
