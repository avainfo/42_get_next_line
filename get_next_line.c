/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:38:29 by ando-sou          #+#    #+#             */
/*   Updated: 2025/11/04 18:58:24 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE];
	int		r;
	int		i;

	r = read(fd, buff, BUFFER_SIZE);
	if (r < 0)
		return (NULL);
	i = 0;
	while (i < r)
		i++;
	return (buff);
}
