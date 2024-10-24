/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:09:53 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/03 10:26:09 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	a;
	char	*n_string;
	long	long_n;

	long_n = (long)n;
	len = (ft_int_len(long_n));
	n_string = malloc(sizeof(char) * (len + 1));
	a = 0;
	if (n_string == NULL)
		return (NULL);
	n_string[len] = '\0';
	if (long_n < 0)
	{
		n_string[0] = '-';
		long_n *= -1;
		a++;
	}
	while (len > a)
	{
		len--;
		n_string[len] = ((long_n % 10) + '0');
		long_n = long_n / 10;
	}
	return (n_string);
}
