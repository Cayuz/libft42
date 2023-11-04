/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 17:20:39 by cavan-vl      #+#    #+#                 */
/*   Updated: 2023/11/04 21:21:49 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
		return (dest);
	}
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char s[] = "hey hoi hallo";
// 	printf("%p\n", s);
// 	printf("%p\n", d);
// 	// printf("%s\n", s);
// 	// ft_memmove(s, s + 5, 5);
// 	// printf("%s\n", s);
// }