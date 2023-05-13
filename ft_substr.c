/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:06:20 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/13 17:19:05 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (NULL);

	size_t s_len = ft_strlen(s);

	if (start >= s_len || len == 0)
		return (ft_strdup(""));

	size_t sub_len = len;
	if (start + len > s_len)
		sub_len = s_len - start;

	char *result = malloc(sizeof(char) * (sub_len + 1));
	if (result == NULL)
		return (NULL);

	ft_memcpy(result, s + start, sub_len);
	result[sub_len] = '\0';

	return (result);
}
