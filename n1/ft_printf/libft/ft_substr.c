/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:50:54 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 11:40:27 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* substr() extracts a substring from a given string, starting at start,
 * and up to len characters long. It handles cases sush as s being NULL,
 * start being out of bounds, and dynamically allocates memory for the substring.
 * The funciont ensures the string is NULL-terminated and returns a pointer to
 * the newly allocated string
 * */
// s = pointer to the NULL-terminated string from which so extract the substring
// start = index of s where the substring extraction should begin
// len = max lenght of the substring to extract
// str =  pointer that will point to the newly allocated string
// size = holds the actual lenght of the substring starting from start
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(char ) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
