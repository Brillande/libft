#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	if (ft_strlen(s) < len)
	{
		len = ft_strlen(s);
	}
	str = malloc(len + 1);
	if (start > (unsigned int)ft_strlen(s))
	{
		*str = '\0';
		return (str);
	}
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

// int main (void)
// {
// 	char *s;

// 	s = "Hola mundo";

// 	printf("%s\n", ft_substr(s, 8 , 8));
// } 