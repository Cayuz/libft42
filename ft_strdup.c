/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 14:51:57 by cavan-vl      #+#    #+#                 */
/*   Updated: 2023/11/04 21:50:44 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	d = (char *)malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (d == NULL)
		return (NULL);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

// int	main(void)
// {
// 	printf("real: %s\n", strdup(""));
// 	printf("mine: %s\n", ft_strdup(""));
// }