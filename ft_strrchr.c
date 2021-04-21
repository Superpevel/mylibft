#include "libft.h"
char* ft_strrchr(char *str, int c)
{
	int i = 0;
	int lst = -1;
	if (c == 0)
	{
		return((char*)str + ft_strlen(str));
	}
	while (str[i] !='\0')
	{
	 if(str[i] == c)
	 {
		 lst = i;
	 }
	i++;
	}
	if(lst>=0)
	{
		return(((char*)str + lst));
	}
	else
	{
		return(NULL);
	}
}
