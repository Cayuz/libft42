/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   copy_array.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:24:10 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/04/18 17:41:40 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	copy_array(char **array, int size)
{
	char	**copy;
	int		i;

	i = 0;
	copy = (char **)ft_malloc(size * sizeof(char *));
	while (i < size - 1)
	{
		copy[i] = ft_strdup(array[i]);
		i++;
	}
	return (copy);
}
