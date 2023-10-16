#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;
	
	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
