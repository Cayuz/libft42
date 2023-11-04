/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 15:11:10 by cavan-vl      #+#    #+#                 */
/*   Updated: 2023/11/04 21:49:48 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*head;
// 	char content;

// 	content = 'f';
// 	head = ft_lstnew(content);
// 	printf("%c\n", head->content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	int		content;

// 	content = 4;
// 	head = ft_lstnew(content);
// 	printf("%i\n", head->content);
// }
