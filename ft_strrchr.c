/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:24:06 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/02 17:49:25 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen((char *)s);
	i = 0;
	if (*s == (char)c)
		return ((char *)s);
	while (len >= 0)
	{
		if (s[len] != (char)c)
		{
			i = ((char *)s)[len--];
		}
		return ((char *)s);
	}
	return (NULL);
}
/*
int main (void)
{git add
	if(ft_strrchr("jefjeowjofew", 'j'))
	{
		printf("%s\n", "funciona");
	}
	else
	{
		printf("%s\n", "nulo");
	}
}
*/