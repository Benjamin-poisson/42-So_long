/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_pt2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:38:01 by bepoisso          #+#    #+#             */
/*   Updated: 2024/12/08 12:38:59 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

// Check if the player hit a ennemt and if it is game over it
void	check_enemy_gameover(t_mlx_data *data, t_mlx_map *map, int move)
{
	if (move == UP
		&& is_in_set(map->map[data->player.y - 1][data->player.x], "WXYZ"))
	{
		ft_printf("\n ***GAME OVER A ENEMY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == DOWN
		&& is_in_set(map->map[data->player.y + 1][data->player.x], "WXYZ"))
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == LEFT
		&& is_in_set(map->map[data->player.y][data->player.x - 1], "WXYZ"))
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == RIGHT
		&& is_in_set(map->map[data->player.y][data->player.x + 1], "WXYZ"))
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
}

// Check if the ennemy hit the player and if it is game over it
void	check_player_gameover(t_mlx_data *data, t_mlx_map *map, int move)
{
	if (move == UP && map->map[map->y - 1][map->x] == 'P')
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == DOWN && map->map[map->y + 1][map->x] == 'P')
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == LEFT && map->map[map->y][map->x - 1] == 'P')
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
	else if (move == RIGHT && map->map[map->y][map->x + 1] == 'P')
	{
		ft_printf("\n ***GAME OVER GHOSTY KILL YOU***\n");
		mlx_destroy(data);
	}
}

// Check if the player want to exit and if he not have
// All the items
void	check_gameover(t_mlx_data *data, t_mlx_map *map, int move)
{
	if (move == UP && map->map[data->player.y - 1][data->player.x] == 'E')
	{
		ft_printf("\n ***GAME OVER %d ITEM MISSING***\n", map->item);
		mlx_destroy(data);
	}
	else if (move == DOWN
		&& map->map[data->player.y + 1][data->player.x] == 'E')
	{
		ft_printf("\n ***GAME OVER %d ITEM MISSING***\n", map->item);
		mlx_destroy(data);
	}
	else if (move == LEFT
		&& map->map[data->player.y][data->player.x - 1] == 'E')
	{
		ft_printf("\n ***GAME OVER %d ITEM MISSING***\n", map->item);
		mlx_destroy(data);
	}
	else if (move == RIGHT
		&& map->map[data->player.y][data->player.x + 1] == 'E')
	{
		ft_printf("\n ***GAME OVER %d ITEM MISSINg***\n", map->item);
		mlx_destroy(data);
	}
}

// Get the pos of a entity and return this pos in the main struct
void	get_entity_pos(t_mlx_map *map, char entity, int index)
{
	int	x;
	int	y;
	int	i;

	i = 1;
	y = 0;
	while (map->map[y] != NULL)
	{
		x = 0;
		while (map->map[y][x] != '\0')
		{
			if (map->map[y][x] == entity)
			{
				if (i == index)
				{
					map->x = x;
					map->y = y;
					return ;
				}
				i++;
			}
			x++;
		}
		y++;
	}
}

// Check if the char (pos) is in the list (set)
int	is_in_set(char pos, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (pos == set[i])
			return (1);
		i++;
	}
	return (0);
}
