/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:04:40 by emedina-          #+#    #+#             */
/*   Updated: 2023/05/16 12:37:34 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		++i;
	return (i);
}

char	*word_dupe(const char *str, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_wordlen(str, c);
	word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, const char *str, char c)
{
	int			word_index;
	const char	*ptr;

	word_index = 0;
	ptr = str;
	while (*ptr != '\0')
	{
		while (*ptr == c)
			++ptr;
		if (*ptr != '\0')
		{
			array[word_index] = word_dupe(ptr, c);
			++word_index;
		}
		while (*ptr != '\0' && *ptr != c)
			++ptr;
	}
}

int	count_words(const char *str, char c)
{
	int	num_words;
	int	i;

	num_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			++num_words;
			while (str[i] != '\0' && str[i] != c)
				++i;
		}
		else
			++i;
	}
	return (num_words);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**array;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	array = malloc(sizeof(char *) * (num_words + 1));
	if (array == NULL)
		return (NULL);
	array[num_words] = NULL;
	fill_words(array, s, c);
	return (array);
}

/* int	main(int ac, char **av)
{
	if (ac == 3)
	{
			char **esplit = ft_split(av[1], av[2][0]);
	int i = 0;
	while (esplit[i])
	{
		printf("%s\n", esplit[i]);
		free(esplit[i]);
		i++;
	}
	free(esplit);

	return (0);
	}

} */