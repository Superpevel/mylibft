#include "libft.h"
char *ft_itoa(int n)
{
	int i;
	int j= 0;
	char c;
	char *k;
	i = n;
	if(n==-2147483648)
	{
		k = ft_strdup("-2147483648");
		return(k);
	}
	if(i <=0)
	{
		i = i*-1;
		j++;
	}
	while(i>0)
	{
		i = i /10;
		j++;
	}
	k = malloc(sizeof(char)*(j+1));
	if(!k)
		return(NULL);
	if(n<0)
	{
		k[0] = '-';
		n = n*-1;
		i = 2;
	}
	else
		i=0;
	k[j] = '\0';
	while (j-->=i)
	{
		c = (n%10) +'0';
		k[j] = c;
		n = n/10;
	}
	return(k);
}

