

int	atoi(const char *nptr)
{
	int	result;
	int	sign;
	unsigned long int	i;
	
	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t')
		i++;
	if(nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return result*sign;
}

/*
#include <stdio.h>
int main() {
    const char *numeroTexto = "-12345";
    int numero = atoi(numeroTexto);
    printf("O número convertido é: %d\n", numero);
    return 0;
}
*/
