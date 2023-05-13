/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:22:15 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/13 16:55:12 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	str[count] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[count - 1] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (str);
}

*/
static int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	else if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	int		len;

	i = 0;
	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		i++;
	}
	else if (n == 0)
	{
		result[0] = '0';
		i++;
	}
	while (n != 0)
	{
		len--;
		result[len] = absolute_value(n % 10) + '0';
		n = n / 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* int main()
{
	int n=-155;
	
	printf("%s",ft_itoa(n));
} */