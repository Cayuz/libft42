/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 14:38:14 by cavan-vl      #+#    #+#                 */
/*   Updated: 2023/11/04 21:22:01 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	ln;

	ln = (long int)n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	if (ln > 9)
		ft_putnbr_fd(ln / 10, fd);
	c = '0' + (ln % 10);
	write(fd, &c, 1);
}
