/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:46 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 15:04:13 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

int	get_map(char *infile, t_data *data)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(infile, O_RDONLY);
	if (fd < 0)
		return (EXIT_FAILURE);
	line = get_next_line(fd);
	while (line)
	{
		if (i >= (data->index_map - data->line_map))
		{
			if (fill_map(line, data, (i - (data->index_map - data->line_map))))
				return (free(line), ft_error("BAD MAP\n"), EXIT_FAILURE);
		}
		i++;
		(free(line), line = get_next_line(fd));
	}
	(free(line), close(fd));
	return (0);
}
