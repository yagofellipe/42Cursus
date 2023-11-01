
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_x(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}

int main() {
    unsigned int test_values[] = {100, 42, 255, 4095, 65535};  // Exemplos de valores inteiros não assinados
    char formats[] = {'x', 'X'};  // Formatos 'x' e 'X'

    for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++) {
        unsigned int value = test_values[i];
        
        for (int j = 0; j < sizeof(formats) / sizeof(formats[0]); j++) {
            char format = formats[j];


            ft_x(value, format);

        }
    }

    return 0;
}
