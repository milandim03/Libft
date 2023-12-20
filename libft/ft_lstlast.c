/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:22:35 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:19:11 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>

// int main() {
//     // Create a linked list for testing
//     t_list *list = NULL;
//     t_list *last = NULL;

//     for (int i = 1; i <= 7; i++) {
//         t_list *new_node = (t_list *)malloc(sizeof(t_list));
//         new_node->content = ft_itoa(i);  // Convert integer to string
//         new_node->next = NULL;

//         if (list == NULL) {
//             list = new_node;
//         } else {
//             last->next = new_node;
//         }

//         last = new_node;
//     }

//     // Find the last element in the list
//     t_list *last_element = ft_lstlast(list);

//     // Print the content of the last element
//     if (last_element) {
//         printf("last element the list: %s\n", (char *)last_element->content);
//     } else {
//         printf("The list is empty.\n");
//     }

//     while (list) {
//         t_list *temp = list;
//         list = list->next;
//         free(temp->content);
//         free(temp);
//     }

//     return 0;
// }
