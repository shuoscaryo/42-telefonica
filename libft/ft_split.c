/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:28:51 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 16:42:43 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_words(const char *s, char c)
{
	size_t	count;
	size_t	is_word;

	is_word = 0;
	count = 0;
	while (*s)
	{
		if (is_word && *s == ' ')
			is_word = 0;
		else if (!is_word && *s != ' ')
		{
			is_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	*ft_get_word(const char **s, char c)
{
	size_t	i;
	char	*out;
	size_t	len;

	len = 0;
	i = 0;
	while (*s[len] && *s[len] != c)
		len++;
	out = malloc(len + 1);
	while (i < len)
		out[i++] = *((*s)++);
	(*s)++;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	num_words;
	size_t	i;

	num_words = ft_get_num_words(s, c);
	words = malloc((sizeof(char *) * (num_words + 1)));
	i = 0;
	while (i < num_words)
		words[i++] = ft_get_word(&s, c);
	words[i] = 0;
	return (words);
}