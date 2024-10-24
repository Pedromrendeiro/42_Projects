/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:08:37 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/03 10:32:27 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_allocation(char **ptr, int b)
{
	if (ptr[b] == NULL)
	{
		while (b >= 0)
		{
			free(ptr[b]);
			b--;
		}
		free(ptr);
		return (0);
	}
	return (1);
}

static int	ft_loop_allocation(char const *s, char c, char **ptr, int a)
{
	int	start;
	int	b;

	b = 0;
	while (s[a])
	{
		while (s[a] == c && s[a])
			a++;
		if (s[a] != c && s[a])
		{
			start = a;
			while (s[a] != c && s[a])
				a++;
			ptr[b] = ft_substr(s, start, a - start);
			if (!ft_check_allocation(ptr, b))
				return (0);
			b++;
		}
	}
	return (1);
}

static int	ft_wordcount(char const *s, char c)
{
	int	count_word;
	int	a;

	count_word = 0;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] != c)
		{
			count_word++;
			while (s[a] != c && s[a] != '\0')
				a++;
		}
		else
			a++;
	}
	return (count_word);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	int		count_word;
	char	**ptr;

	if (s == NULL)
		return (NULL);
	count_word = ft_wordcount(s, c);
	ptr = malloc((count_word + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	a = 0;
	if (!ft_loop_allocation(s, c, ptr, a))
		return (NULL);
	ptr[count_word] = NULL;
	return (ptr);
}
