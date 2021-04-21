
#include "libft.h"

int ft_strchr2(char s, char *c)
{
	size_t i= 0;
	while(i< ft_strlen(c))
	{
		if(c[i]== s)
		{
			return(1);
		}
		i++;
	}
	return(0);
}

char *ft_strtrim(char *s1, char *set)
{
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	char *new;
	while(i<ft_strlen(s1))
	{
		if(ft_strchr2(s1[i],set))
			j++;
		i++;
	}
	new = malloc(sizeof(char)*(ft_strlen(s1)-i+2));
	i =0;
	while(i<ft_strlen(s1))
	{
		if(!(ft_strchr2(s1[i],set)))
		{
			new[k] = s1[i];
			k++;
		}
		i++;
	}
	new[k] = '\0';
	return(new);
}
