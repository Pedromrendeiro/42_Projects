/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:30:05 by pfaustin          #+#    #+#             */
/*   Updated: 2024/09/18 12:19:11 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //variadic
# include <unistd.h> //write
# include <stddef.h> //size_t
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	print_char(char c, long int *len);
void	print_str(char *s, long int *len);
void	print_nbr(int n, long int *len);
void	print_unsigned_nbr(unsigned int n, long int *len);
void	print_hexa(size_t n, long int *len, char c);
void	print_ptr(void *ptr, long int *len);

#endif
