/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:10:08 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:10:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
Parameters: lst:  The address of a pointer to a node.
            f:  The address of the function used to iterate on
            the list.
Return: None
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	(*f)(lst -> content);
	ft_lstiter(lst -> next, f);
}
