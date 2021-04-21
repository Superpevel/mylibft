#include "libft.h"
char *ft_strdup(const char *s1)
{
	size_t i = ft_strlen(s1);
	size_t j = 0;

	char *s2;
	if(!(s2 = malloc(sizeof(char)* (i+1))))
		return(NULL);
	while(j<i)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return(s2);
}
