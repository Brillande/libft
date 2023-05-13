/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:34:52 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/09 15:36:22 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		i;

	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
	}
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	} 
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	} 
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	while (--i >= 0)
	{
		write(fd, &str[i], 1);
	}
}

/* int main (void)
{
	ft_putnbr_fd(-2147483648LL, 2);
}  */