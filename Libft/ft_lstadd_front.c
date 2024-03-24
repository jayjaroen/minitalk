/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:09:13 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 12:09:20 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Adds the node ’new’ at the beginning of the list.
Parameters: lst:  The address of a pointer to the first link of
            a list.
            (A pointer to a pointer to the first node of the linked list.)
            new:  The address of a pointer to the node to be
            added to the list.
Return: None
1. If the list is not empty, it sets the next pointer of the new node to point
to the current first node of the list (*lst).
2. Then, it updates the pointer to the first node of the list (*lst) to point
to the new node, making it the new first node of the list.
3. If the list is empty (*lst is NULL), it simply sets the pointer to the first
node of the list (*lst) to point to the new node.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
	else if (new != NULL)
		*lst = new;
}
/*void  print_list(t_list *lst)
{
  while (lst != NULL)
  {
    printf("%s ->", (char *)lst->content);
    lst = lst -> next;
  }
}
int main(void)
{
  // create nodes
  t_list  *first = (t_list*)malloc(sizeof(t_list));
  first -> content = "hello";
  first -> next = NULL;
  t_list  *second = (t_list*)malloc(sizeof(t_list));
  second -> content = "world";
  second -> next = NULL;
  // Initialize the list pointer
  t_list *list = NULL;
  // Add node to the front of the list
  ft_lstadd_front(&list, first);
  ft_lstadd_front(&list, second);
  // Print the list;
  print_list(list);
}*/
