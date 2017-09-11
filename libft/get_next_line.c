/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atgerard <atgerard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 10:40:27 by atgerard          #+#    #+#             */
/*   Updated: 2017/03/31 11:14:32 by atgerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		bshn_stock(char **stock, char **line)
{
	char			*tmp;

	if ((tmp = ft_strchr(*stock, '\n')))
	{
		*tmp = '\0';
		*line = ft_strdup(*stock);
		if (tmp + 1)
			tmp = ft_strdup(tmp + 1);
		else
			tmp = NULL;
		free(*stock);
		*stock = tmp;
		return (READ_LINE);
	}
	return (READ_OVER);
}

int		ft_read(char *buffer, char **stock, char **line)
{
	char			*tmp;

	if ((tmp = ft_strchr(buffer, '\n')))
	{
		*tmp = '\0';
		*line = ft_strjoin(*stock, buffer);
		if (tmp + 1)
			tmp = ft_strdup(tmp + 1);
		else
			tmp = NULL;
		free(*stock);
		free(buffer);
		*stock = tmp;
		return (READ_LINE);
	}
	return (READ_OVER);
}

void	ft_escape_norm(char *buffer, char **stock)
{
	char	*tmp;

	tmp = ft_strjoin(*stock, buffer);
	ft_memdel((void *)stock);
	*stock = ft_strdup(tmp);
	ft_memdel((void *)&tmp);
}

int		get_next_line(int const fd, char **line)
{
	static char		*stock = NULL;
	char			*buffer;
	ssize_t			ret;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (READ_ERROR);
	if (stock)
		if (bshn_stock(&stock, line))
			return (READ_LINE);
	buffer = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if (ft_read(buffer, &stock, line))
			return (READ_LINE);
		ft_escape_norm(buffer, &stock);
	}
	ft_memdel((void *)&buffer);
	if (ret == -1)
		return (READ_ERROR);
	if ((stock == NULL || stock[0] == '\0' || line == NULL))
		return (READ_OVER);
	*line = ft_strdup(stock);
	ft_memdel((void *)&stock);
	return (READ_LINE);
}
