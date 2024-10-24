/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:07:33 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 13:48:33 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* srtrim() tirms characters specified in set from both beginning and the end
 * of the string s1. It returns a newly allocated string that contains the
 * trimmed version of s1.
 * */
// s1 = string that we want to trim
// set = set of characters to trim from s1
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (a && ft_strchr(set, s1[a]))
		a--;
	return (ft_substr(s1, 0, a + 1));
}
