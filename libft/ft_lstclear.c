/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:01:10 by milandim          #+#    #+#             */
/*   Updated: 2023/10/26 16:22:06 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	if (lst)
	{
		while (*lst)
		{
			t = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = t;
		}
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

//     // Add the nodes to the linked list
//     ft_lstadd_back(&myList, node1);
//     ft_lstadd_back(&myList, node2);
//     ft_lstadd_back(&myList, node3);

//     // Print the original contents of the list
//     printf("Original Linked List Contents:\n");
//     printList(myList);

//     // Clear the list using ft_lstclear
//     ft_lstclear(&myList, &free);

//     // Print the cleared list (should be empty)
//     printf("Cleared Linked List Contents:\n");
//     printList(myList);

//     return 0;
// }