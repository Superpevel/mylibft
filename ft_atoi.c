#include "libft.h"

int is_space(char c)
{
	if(c=='\n' || c=='\t' || c=='\v' || c== '\f' || c=='\r' || c==' ')
		return(1);
	else
		return(0);
}
int is_oper(char c)
{
	if (c == '+' || c=='-')
		return(1);
	else
		return(0);
}
int ft_isdigit1(char c)
{
	if((c>='0') && (c <= '9'))
		return (1);
	else
		return(0);
}
int ft_atoi(const char *str)
{
	int i = 0;
	int min = 1;
	int rez = 0;
	while (is_space(str[i]))
		i++;
	while(is_oper(str[i]))
	{
		if(str[i] == '-')
			min=-1*min;
		i++;
	}
	while(ft_isdigit1(str[i]))
	{
			rez = rez*10 + (str[i]-'0');
			i++;
	}
	return(rez*min);
}
