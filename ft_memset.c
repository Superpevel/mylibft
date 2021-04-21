
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void * ft_memset(void *b, int c, size_t len)
{
	char *dp = b;
	size_t i = 0;
	while(i < len)
	{
		*dp= c;
		dp++;
		i++;
	}
	return(b);
}


