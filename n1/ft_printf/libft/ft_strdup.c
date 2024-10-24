/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:57:36 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 11:16:18 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* allocates sufficient memory for a copy of the string s,
 * copies it and returns a pointer to it
 * */
// s = string to be copied
// size = holds the lenght of the string s
// dest = pointer that will point to the newly allocated duplicate string
// returns a pointer to the newly allocated string, or NULL if it fails
char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s, size);
	dest[size] = '\0';
	return (dest);
}
/*dest = (char *)malloc(size * sizeof(char) + 1)
 * calculates the total number of bytes needed to store the string s
 * */
