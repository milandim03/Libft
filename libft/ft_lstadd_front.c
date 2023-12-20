/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:51:02 by milandim          #+#    #+#             */
/*   Updated: 2023/10/26 16:14:43 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst[1] == NULL)
		lst[0] = new;
	else
	{
		new->next = *lst;
		lst[0] = new;
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
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     // Add the nodes to the front of the list
//     ft_lstadd_front(&myList, node1);
//     ft_lstadd_front(&myList, node2);
//     ft_lstadd_front(&myList, node1);

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