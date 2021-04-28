#include	"libft.h"

size_t ft_strlen1(const char *s)
{
	size_t i;
	i = 0;
	while(s[i] !='\0')
	{
		i++;
	}
	return(i);
}

size_t ft_strlcpy(char *dest,const char *src,size_t size)
{
	size_t i = 0;

	if(!size)
		return(ft_strlen1(src));
	if(!dest && !src)
		return(0);
	while((src[i] != '\0'  && i<size-1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(ft_strlen1(src));
}
