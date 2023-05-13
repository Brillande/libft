#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len1 = ft_strlen(s1);
	size_t len2 = ft_strlen(s2);

	char *str = malloc(len1 + len2 + 1);
	if (!s1 || !s2)
		return (NULL);
	if (!str)
		return (NULL);

	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2 + 1);

	return (str);
}