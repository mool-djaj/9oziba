/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:43:55 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/25 21:41:27 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **d, size_t i)
{
	while (i > 0)
		free(d[--i]);
	free(d);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word_fill(const char *s, char c)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s[start] && s[start] == c)
		start++;
	if (!s[start])
		return (NULL);
	end = start;
	while (s[end] && s[end] != c)
		end++;
	return (ft_substr(s, start, end - start));
}

static char	**ft_ptrml(const char *s, char c)
{
	char	**d;
	size_t	i;
	size_t	words;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	d = malloc((words + 1) * sizeof(char *));
	if (!d)
		return (NULL);
	return (d);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**d;
	char	*word;

	i = 0;
	d = ft_ptrml(s, c);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		word = word_fill(s, c);
		if (!word)
			return (free_split(d, i), NULL);
		d[i++] = word;
		s += ft_strlen(word);
	}
	d[i] = NULL;
	return (d);
}
