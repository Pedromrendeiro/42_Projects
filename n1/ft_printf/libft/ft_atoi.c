/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:15:45 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 10:42:59 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* atoi() converts a string representation of an
 * integer to its integer value in C
 * */
// i = index that iterates through the string str
// result stores the accumulated integer value
// signal stores the sign of the number (1 or -1)
// returns the converted value
int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	signal = 1;
	result = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -signal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * signal;
	return (result);
}
