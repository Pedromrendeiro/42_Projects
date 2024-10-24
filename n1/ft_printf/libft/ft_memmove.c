/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:47:19 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 09:39:59 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*memmove() copies n bytes from memory block src to memory block dest
 * while handling overllaping memory regions
 * */
//overlapping = when src and dest memory regions overlap
//if the regions dont overlap, memcpy() suffices
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
