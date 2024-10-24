/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:27:36 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 09:28:54 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//memcpy() copies n bytes from memory block src to memory block dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	if (!dest)
		return (NULL);
	a = 0;
	while (a < n)
	{
		*(char *)(dest + a) = *(char *)(src + a);
		a++;
	}
	return (dest);
}
