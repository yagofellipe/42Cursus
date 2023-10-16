#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;
	
	d = (char *)dest;
	s = (char *)src;
	if(d == s)
		return (dest);
	
	if (d < s || d >= s + n)
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i-1] = s[i-1];
			i--;
		}
	}
	return (dest);
}
