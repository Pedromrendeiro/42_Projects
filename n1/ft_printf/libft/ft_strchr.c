/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:49:30 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 09:53:24 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strchr() locates the first occurrence of c (converted
 * to a char) in the string pointed to by s
 * */
// s = string to search
// c = character to seatch for
/* returns a pointer to the located character, or NUll if
 * the character doesnt appear on the stirng
 * */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
