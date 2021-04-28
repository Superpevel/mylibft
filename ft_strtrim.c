
#include "libft.h"



size_t get_len_before(char *s, char *set)
{
	size_t i = 0;
	size_t j = 0;
	while(s[i] != '\0')
	{
		j= 0 ;
		while (set[j] != '\0')
		{
			if(s[i] == set[j])
				j++;
			else
				return(i);
		}
		i++;
	}
	return(i);
}
int get_len_after(char *s, char *set)
{
	size_t i = ft_strlen(s);
	size_t j = 0;
	size_t lol = 0;
	while(i--)
	{
		j= 0;
		while (set[j] != '\0')
		{
			if(s[i] != set[j])
				return(lol);
			j++;
		}
		lol++;
	}
	return(lol);
}
char *ft_strtrim(char *s, char *set)
{
	size_t i ;
	size_t j;
	int k = 0;
	char *new;
	i = get_len_before(s,set);
	printf("%zu",i);
	j = get_len_after(s,set);
	new = malloc(sizeof(char)*(ft_strlen(s)-get_len_before(s,set)- get_len_after(s,set)+1));
	while(i < ft_strlen(s)- j)
	{
		new[k] = s[i];
		i++;
		k++;
	}
	new[k] = '\0';
	// printf("%s",new);
	return(new);
}

