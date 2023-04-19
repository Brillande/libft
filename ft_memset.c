/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:02:03 by emedina-          #+#    #+#             */
/*   Updated: 2023/04/19 15:26:23 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	int *ptr;
	size_t i;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr = c;
		i++;
	}
	return (ptr);
}