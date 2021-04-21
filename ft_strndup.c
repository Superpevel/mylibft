#include "libft.h"
char *ft_strndup(char *s1, size_t n)
{
	size_t i =0;
	char *s2;
	if(!(s2 = malloc(sizeof(char)* (n+1))))
		return(NULL);
	while (n--)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return(s2);
}
