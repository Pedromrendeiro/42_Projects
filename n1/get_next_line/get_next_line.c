/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:36:00 by pfaustin          #+#    #+#             */
/*   Updated: 2024/10/14 10:15:56 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_until_nl(int fd, char *str)
{
	char	temp[BUFFER_SIZE + 1];
	int		chars_read;
	int		i;

	i = 0;
	while (i < BUFFER_SIZE)
		temp[i++] = '\0';
	chars_read = 1;
	while (!ft_strchr(temp, '\n') && chars_read)
	{
		chars_read = read(fd, temp, BUFFER_SIZE);
		if (chars_read < 0 || (!chars_read && !str))
			return (NULL);
		temp[chars_read] = '\0';
		if (!str)
			str = ft_strdup(temp);
		else
			str = ft_strjoin(str, temp);
		if (!str)
			return (NULL);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*string;
	char		*final_string;
	char		*remaining_chars;
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	string = get_until_nl(fd, string);
	if (!string)
		return (NULL);
	while (string[i] != '\n' && string[i])
		i++;
	if (string[i] == '\n')
		i++;
	final_string = ft_substr(string, 0, i);
	remaining_chars = ft_substr(string, i, ft_strlen(string) - i);
	free(string);
	string = remaining_chars;
	return (final_string);
}
/* int	main()
{
	int fd = open("texto.txt", O_RDONLY);
	char *str;
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	return (0);
}  */