#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*sun;
	
	i = 0;
	sun = (const unsigned char*)s;
	while (i < n)
	{
		if (sun[i] == (unsigned char)c)
			return (sun[i]);
		i++;
	}
}

int	main()
{
	unsigned char memory[] = {0x10, 0x20, 0x30, 0x40, 0x50};
	int target = 0x30;
	size_t size = 5;

	void *result = ft_memchr(memory, target, size);

	if (result)
		printf("Byte 0x%02X encontrado na posição: %ld\n", target, (unsigned char *)result - memory);
	else
		printf("Byte 0x%02X não encontrado na memória.\n", target);

	return (0);
}

