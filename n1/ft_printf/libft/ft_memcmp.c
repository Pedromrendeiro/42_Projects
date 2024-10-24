/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:42:48 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 10:16:09 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* memcmp() compares byte strings s1 and s2, which are
 * assumed to be n bytes long
 * */
// s1 = first memory block to be compared
// s2 = second memory block to be compared
// n = number of bytes to compare
// i = index that iterates through the memory blocks
/* returns a
 * positive integer if s1 bytes is greater than s2 bytes
 * 0 if s1 bytes is equal to s2 bytes
 * negative integer if s1 bytes is less than s2 bytes
 * */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
