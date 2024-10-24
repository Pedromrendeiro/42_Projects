/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:42:11 by pfaustin          #+#    #+#             */
/*   Updated: 2024/05/20 13:16:06 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *s, long int *len)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (s[i])
	{
		print_char(s[i], len);
		i++;
	}
}

void	print_nbr(int n, long int *len)
{
	if (n == -2147483648)
	{
		print_str("-2147483648", len);
		return ;
	}
	if (n < 0)
	{
		print_char('-', len);
		n *= -1;
	}
	if (n > 9)
	{
		print_nbr(n / 10, len);
	}
	print_char(n % 10 + '0', len);
}

void	print_unsigned_nbr(unsigned int n, long int *len)
{
	if (n > 9)
	{
		print_unsigned_nbr(n / 10, len);
	}
	print_char(n % 10 + '0', len);
}

void	print_hexa(size_t n, long int *len, char c)
{
	if (n >= 16)
		print_hexa(n / 16, len, c);
	if (c == 'x')
		print_char("0123456789abcdef"[n % 16], len);
	if (c == 'X')
		print_char("0123456789ABCDEF"[n % 16], len);
}

void	print_ptr(void *ptr, long int *len)
{
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	print_char('0', len);
	print_char('x', len);
	print_hexa((size_t)ptr, len, 'x');
}
