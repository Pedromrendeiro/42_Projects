/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:57:30 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 10:04:09 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// strncmp() compares num characters of two strings (s1 and s2)
// num = number of characters to be compared
/* returns a
 * positive integer if s1 is greater than s2
 * 0 if s1 is equal to s2
 * negative integer if s1 is less than s2
 * */
// i = index that iterates through the strings
int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (0);
	while ((i < num) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
