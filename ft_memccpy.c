#include "libft.h"
void *ft_memccpy(void *dst,void *src, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char *sym;
	ptr = ((unsigned char*)dst);
	sym = ((unsigned char*)src);
	while(n--)
	{
		if(*ptr == c)
		{
			return(ptr);
		}
		*ptr = *sym;
		ptr++;
		sym++;
	}
	return(ptr);
}
