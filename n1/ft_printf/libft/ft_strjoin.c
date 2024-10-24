/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:03:26 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 12:06:14 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strjoin() concatenates two strings s1 and s2 into a newly allocated
 * string str. It dynamically allocates memory for str, copies the
 * content of s1 and s2 into it, ensures the resulting string is
 * NULL-terminated, and returns a pointer to the concatenated string.
 * */
// s1 = prefix string
// s2 = suffix string
// str = pointer that will point to the newly allocated string
// a = variable used as index for s1
// b = variable used as index for s2
// returns the new string. NULL if the allocation fails
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	a;
	size_t	b;

	str = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a])
	{
		str[b++] = s1[a];
		a++;
	}
	a = 0;
	while (s2[a])
	{
		str[b++] = s2[a];
		a++;
	}
	str[b] = 0;
	return (str);
}
