#include "libft.h"

int	ft_is_char(char c, char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_after(char *s, char *set)
{
	size_t	j;

	s =s + ft_strlen(s) - 1;
	j = 0;
	while (ft_is_char(*s, set))
	{
		s--;
		j++;
	}
	return (j);
}

char	*ft_fills(char *new, size_t i, size_t j, char *s)
{
	size_t	k;
	size_t	size;

	k = 0;
	s = s - i;
	size = ft_strlen(s);
	s = s + i;
	while (i < size - j)
	{
		i++;
		new[k] = *s;
		k++;
		s++;
	}
	new[k] = '\0';
	return (new);
}

char	*ft_strtrim(char *s, char *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*new;

	if (!set || !s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	j = ft_after(s, set);
	while (ft_is_char(*s, set))
	{
		s++;
		i++;
	}
	if (size - i == 0)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (size - i - j + 1));
	if (!new)
		return (NULL);
	return (ft_fills(new, i, j, s));
}
