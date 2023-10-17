#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*s1c;
	const unsigned char	*s2c;
	
	i = 0;
	s1c = (const unsigned char*)s1;
	s2c = (const unsigned char*)s2;
	while ((s1c[i] || s2c[i]) && i < n)
	{
		if (s1c[i] != s2c[i])
			return (int)(s1c[i] - s2c[i]);
		i++;
	}
	return (0);
}

int main() {
    unsigned char memory1[] = {0x10, 0x20, 0x30, 0x40, 0x50};
    unsigned char memory2[] = {0x10, 0x20, 0x35, 0x40, 0x55};
    size_t size = 5;

    int result = ft_memcmp(memory1, memory2, size);

    if (result < 0) {
        printf("memory1 é menor do que memory2.\n");
    } else if (result > 0) {
        printf("memory1 é maior do que memory2.\n");
    } else {
        printf("memory1 é igual a memory2.\n");
    }

    return 0;
}
