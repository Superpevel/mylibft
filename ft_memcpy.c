#include "libft.h"
#include <unistd.h>
void *ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dp = dst;
    const char *sp = src;
	i = 0;
	if(!dst && !src)
		return(NULL);
	while (i < len)
	{
		*dp++ = *sp++;
		i++;
	}
	return(dst);
}


