/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:59:11 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 09:56:20 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strrchr() locates the last occurrence of c (converted
 * to a char) in the string pointed to by s)
 * */
// s = the string to search
// c = the character to search for
/* returns a pointer to the located character, or NULL if
 * the character doesnt appear on the string
 * */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (ptr = (char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (ptr = (char *)s + i);
		i--;
	}
	return (NULL);
}
