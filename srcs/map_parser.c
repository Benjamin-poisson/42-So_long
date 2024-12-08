/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:02:17 by bepoisso          #+#    #+#             */
/*   Updated: 2024/12/08 12:40:24 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

// Count the number of line in a files
int	files_count_line(char *file_name)
{
	char	buf[1];
	int		count;
	char	fd;
	char	readed;

	count = 0;
	readed = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (readed != 0)
	{
		readed = read(fd, buf, 1);
		if (*buf == '\n')
			count++;
	}
	close(fd);
	return (count);
}

// Create a char 2D of the map
char	**split_map(char *file_name)
{
	int		count_line;
	char	**map;
	int		i;
	int		fd;

	i = 0;
	if (!file_name || file_name[0] == '\0')
		return (NULL);
	count_line = files_count_line(file_name);
	map = (char **)malloc(sizeof(char *) * (count_line + 1));
	fd = open(file_name, O_RDONLY);
	if (count_line < 0 || map == NULL || fd == -1)
		return (NULL);
	while (i < count_line)
	{
		map[i] = get_next_line(fd);
		i++;
	}
	map[i] = NULL;
	return (map);
}

// Get the size of the map and put it in the main struct
void	map_xy_size(t_mlx_map *map)
{
	map->x = 0;
	map->y = 0;
	map->y_max = 0;
	while (map->map[map->y_max])
	{
		map->x_max = 0;
		while (map->map[map->y_max][map->x_max])
			map->x_max++;
		map->y_max++;
	}
	map->x_max--;
	map->y_max--;
}

// Check if all the map is bordered by a wall
int	check_wall(t_mlx_map *map)
{
	map_xy_size(map);
	map->y = 0;
	map->x = 0;
	while (map->x < map->x_max)
	{
		if (map->map[map->y][map->x] != '1')
			return (1);
		map->x++;
	}
	map->x = 0;
	while (map->y < map->y_max)
	{
		if (map->map[map->y][map->x] != '1'
			|| map->map[map->y][map->x_max - 1] != '1')
			return (1);
		map->y++;
	}
	while (map->x < map->x_max)
	{
		if (map->map[map->y_max][map->x] != '1')
			return (1);
		map->x++;
	}
	return (0);
}

// Check if all obligatory entity is in the map
int	check_entitys_in_map(char **map)
{
	t_entity_check	entity;
	int				x;
	int				y;

	entity.player_check = 0;
	entity.exit_check = 0;
	entity.item_check = 0;
	y = -1;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
		{
			if (map[y][x] == 'P')
				entity.player_check++;
			if (map[y][x] == 'E')
				entity.exit_check++;
			if (map[y][x] == 'C')
				entity.item_check++;
		}
	}
	if (entity.player_check != 1 || entity.exit_check != 1
		|| entity.item_check == 0)
		return (1);
	return (0);
}
