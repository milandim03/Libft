/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:16:48 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 13:16:37 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
// #include <stdio.h>

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

//     // Add the nodes to the linked list
//     ft_lstadd_back(&myList, node1);
//     ft_lstadd_back(&myList, node2);
//     ft_lstadd_back(&myList, node3);

//     // Print the original contents of the list
//     printf("Original Linked List Contents:\n");
//     printList(myList);

//     // Delete the second node from the list using ft_lstdelone
//     printf("Deleting the second node...\n");
//     ft_lstdelone(node2, &free);

//     // Print the modified list (node2 should be removed)
//     printf("Modified Linked List Contents:\n");
//     printList(myList);

//     // Free the memory used by the linked list
//     while (myList) {
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp->content); // Free the content
//         free(temp); // Free the node itself
//     }

//     return 0;
// }