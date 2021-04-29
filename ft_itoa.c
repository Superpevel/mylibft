#include "libft.h"

char	*ft_checkmax(int n)
{
	char	*k;

	if (n == -2147483648)
	{
		k = ft_strdup("-2147483648");
		return (k);
	}
	return (NULL);
}

char	*ft_fill(char *k, int n, int j, int i)
{
	if (n < 0)
	{
		k[0] = '-';
		n = n * -1;
		i = 2;
	}
	else
		i = 0;
	k[j] = '\0';
	while (j-- >= i)
	{
		k[j] = (n % 10) + '0';
		n = n / 10;
	}
	return (k);
}

int	ft_j(int i, int j)
{
	while (i > 0)
	{
		i = i /10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*k;

	i = n;
	j = 0;
	if (ft_checkmax(n))
		return (ft_checkmax((n)));
	if (n <= 0)
	{
		i = i * -1;
		j++;
	}
	j = ft_j(i, j);
	k = malloc(sizeof(char) * (j + 1));
	if (!k)
		return (NULL);
	return (ft_fill(k, n, j, i));
}
