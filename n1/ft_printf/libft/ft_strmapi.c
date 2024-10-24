/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:10:45 by pfaustin          #+#    #+#             */
/*   Updated: 2024/05/20 09:46:27 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	a;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	a = 0;
	while (s[a])
	{
		ptr[a] = f(a, s[a]);
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
