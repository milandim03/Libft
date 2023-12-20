/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:11:05 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:34:57 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main() {
//     // Create a linked list for testing
//     t_list *list = NULL;

//     for (int i = 1; i <= 10; i++) {
//         int *value = (int *)malloc(sizeof(int));
//         *value = i;

//         t_list *new_node = ft_lstnew(value);
//         if (new_node) {
//             ft_lstadd_back(&list, new_node);
//         } else {
//             // Handle memory allocation failure
//         }
//     }

//     // Use ft_lstsize to count the number of elements in the list
//     int size = ft_lstsize(list);

//     printf("The size of the list is: %d\n", size);

//     // Free the memory allocated for the list and its elements
//     t_list *current = list;
//     while (current) {
//         t_list *temp = current;
//         current = current->next;
//         free(temp->content);
//         free(temp);
//     }

//     return 0;
// }