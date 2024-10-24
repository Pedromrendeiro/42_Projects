/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:54:12 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/21 11:09:10 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* calloc() allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to te allocated memory
 * */
// nmemb =  number of elements
// size = size of each element
// ptr = pointer that will eventually point to the allocated memory
// total = variable that holds the total number of bytes to allocate
/* checks for integer overflow (attempting to store inside an integer
 * variable that is larger than the max value the variable can hold
 * */
// returns a pointer to the allocated memory, or NUll if it fails
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc (0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	total = nmemb * size;
	if (nmemb != total / size)
		return (NULL);
	ptr = malloc (total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
