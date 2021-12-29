/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:10:03 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/25 19:49:48 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s != c && *s)
		s++;
	if (*s == (unsigned char)c)
		return (s);
	else
		return (0);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *buffers, char *buff)
{
	int		i;
	int		j;
	char	*new;

	if (!buffers)
	{
		buffers = (char *)malloc(sizeof(char));
		buffers[0] = '\0';
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffers)
				+ ft_strlen(buff) + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (buffers[++i])
		new[i] = buffers[i];
	while (buff[j])
		new[i++] = buff[j++];
	new[ft_strlen(buffers) + ft_strlen(buff)] = '\0';
	return (new);
}
