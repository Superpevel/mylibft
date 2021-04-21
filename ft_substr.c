#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *sub;
	size_t i;
	if(!s)
		return(NULL);
	i = 0;
	if(!(sub = malloc(sizeof(char)*(len+1))))
		return(NULL);
	if (start >= ft_strlen(s))
		return(sub);
	while(i<len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return(sub);
}
