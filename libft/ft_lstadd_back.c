/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:28:53 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 13:26:42 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	i = *lst;
	if (!i)
	{
		*lst = new;
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = new;
	}
}
// #include <stdio.h>
// // A simple function to print the content of a linked list
// void printList(t_list *lst) {
//     while (lst) {
//         printf("%s -> ", (char *)(lst->content));
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     t_list *myList = NULL; // Initialize an empty linked list

//     // Create t_list nodes and populate them with data
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2 me");
//     t_list *node3 = ft_lstnew("Node 3");

//     // Add the nodes to the end of the list
//     ft_lstadd_back(&myList, node1);
//     ft_lstadd_back(&myList, node2);
//     ft_lstadd_back(&myList, node3);

//     // Print the contents of the list
//     printf("Linked List Contents:\n");
//     printList(myList);

//     // Free the memory used by the linked list
//     while (myList) {
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp);
//     }

//     return 0;
// }