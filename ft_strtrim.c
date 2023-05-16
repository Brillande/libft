/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:39:33 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/16 12:39:38 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t len1;
	size_t len2;
	size_t i;
	size_t j;
	char *str;

	if (!s1 || !set)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(set);
	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len1 > 0 && ft_strchr(set, s1[len1 - 1]))
		len1--;
	if (len1 < i)
		len1 = i;
	str = malloc(len1 - i + 1);
	if (!str)
		return (NULL);
	while (i < len1)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}