/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:02 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 09:49:13 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strlcat() appends the NULL-terminated string src to the end
 * of dst. It appends at max strlen(dst) - 1 bytes, NULL
 * terminating the result
 * */
// dl = destination lenght
// sl = source lenght
// returns the lenght of the string it tried to create
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	dl = 0;
	sl = 0;
	while (dst[dl] && dl < size)
		dl++;
	while (src[sl] && (dl + sl + 1) < size)
	{
		dst[dl + sl] = src[sl];
		sl++;
	}
	if (dl < size)
		dst[dl + sl] = '\0';
	return (dl + ft_strlen(src));
}
