#include "libft.h"
char *ft_strdup(const char *s1)
{
	size_t len;
	char *newstr;

	len = ft_strlen(s1);
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return NULL;
	ft_strlcpy(newstr, s1, len + 1);
	return (newstr);
}
/* 
int main (void)
{
	char *newstr = ft_strdup(NULL);
	printf("%s\n", newstr);
	free(newstr);
	return (0);
} */