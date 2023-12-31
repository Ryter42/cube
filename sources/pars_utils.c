/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:13 by avallet           #+#    #+#             */
/*   Updated: 2023/12/21 09:34:22 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

int	is_nothing(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || !c)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (c);
	else
		return (0);
}

int	empty_line(char *str)
{
	int	i;

	i = 0;
	if (!str[i] || str[i] == '\n')
		return (EXIT_FAILURE);
	while (str[i] && str[i] != '\n')
	{
		if ((str[i] != ' ') && (str[i] != '\t'))
			return (EXIT_SUCCESS);
		i++;
	}
	return (EXIT_FAILURE);
}

int	check_empty_line(t_data *data)
{
	int	y;

	y = 0;
	if (!data->map_char)
		return (EXIT_FAILURE);
	while (data->map_char[y])
	{
		if (empty_line(data->map_char[y]))
			return (EXIT_FAILURE);
		y++;
	}
	return (EXIT_SUCCESS);
}

bool	check_path_texture(char *path_texture)
{
	char	*path;
	int		i;

	if (!path_texture || !*path_texture)
		return (false);
	i = 0;
	while (path_texture[i])
		i++;
	path = malloc(sizeof(char) * (i + 1));
	if (!path)
		return (false);
	i = 0;
	while (path_texture[i])
	{
		path[i] = path_texture[i];
		i++;
	}
	path[i] = '\0';
	if ((access(path, F_OK) == -1) || (access(path, R_OK) == -1))
		return (free(path), false);
	else
		return (free(path), true);
}
