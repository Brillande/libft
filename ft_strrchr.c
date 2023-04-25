/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:24:06 by emedina-          #+#    #+#             */
/*   Updated: 2023/04/25 15:27:28 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *str;
// intenta hacer con int i por probar y utiliza ft_strlen
	int len;
	int i;

	len = ft_strlen((char *)s);
	str = s;
	i = 0;
	while (*s)
	{
		if (str[len] != (char)c)
		{
			((char *)str)[len]--;
		}
	}
	while (*s)
	{
		if (s[i] != (char)c)
		{
			((char *)s)[i]++;
		}
	}
	if (str[len] > s[i])
	{
		return ((char *)str);
	}
	if (*s == (char)c)
		return ((char *)s);
	return NULL;
}

int main (void)
{
	if(ft_strrchr("jefjeowjofew", 'j'))
	{
		printf("%s\n", "funciona");
	}
	else
	{
		printf("%s\n", "nulo");
	}
}