#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

int	main(void)
{
	if(ft_isalpha('5'))
	{
		printf("%s\n", "Es alfanumerico");
	}
	else
	{
		printf("%s\n", "No es alfanumerico");
	}
	if(ft_isalpha('g'))
	{
		printf("%s\n", "Es alfanumerico");
	}
	else
	{
		printf("%s\n", "No es alfanumerico");
	}
	if(ft_isalpha('G'))
	{
		printf("%s\n", "Es alfanumerico");
	}
	else
	{
		printf("%s\n", "No es alfanumerico");
	}
}