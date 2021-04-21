#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char tmp[len];
	if(!dst && !src)
		return(NULL);
	ft_memcpy(tmp,src,len);
	ft_memcpy(dst,tmp,len);
	return dst;
}

