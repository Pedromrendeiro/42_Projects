/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:09:41 by pfaustin          #+#    #+#             */
/*   Updated: 2024/09/18 12:17:14 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(char c, long int *len)
{
	write(1, &c, 1);
	(*len)++;
}

static void	ft_formats(char c, va_list arg, long int *len)
{
	if (c == 'c')
		print_char(va_arg(arg, int), len);
	else if (c == 's')
		print_str(va_arg(arg, char *), len);
	else if (c == 'p')
		print_ptr(va_arg(arg, void *), len);
	else if (c == 'd' || c == 'i')
		print_nbr(va_arg(arg, int), len);
	else if (c == 'u')
		print_unsigned_nbr(va_arg(arg, unsigned int), len);
	else if (c == 'x')
		print_hexa(va_arg(arg, unsigned int), len, c);
	else if (c == 'X')
		print_hexa(va_arg(arg, unsigned int), len, c);
	else if (c == '%')
		print_char('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	unsigned int	i;
	long int		len;

	i = 0;
	len = 0;
	if (str[0] == '\0')
		return (-1);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_formats(str[++i], arg, &len);
		else
			print_char(str[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
