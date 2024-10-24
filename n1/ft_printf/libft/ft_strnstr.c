/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:48:54 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 10:36:39 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strnstr() searches for the first occurrence of the
 * substring little withing the string big, but limits
 * the search to len characters
 * */
// big = string to search in
// little = string to search for
// len = number of characters to search
// n = lenght of little
// returns a pointer to the located character, or NULL if it doesnt appear
char
	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
