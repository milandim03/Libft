/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:06:49 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:14:51 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

// #include <stdio.h>

// int main() {
//     // Create a single-node linked list
//     char *data = "Hello, World!";
//     t_list *list = ft_lstnew(data);

//     // Check if the list was created successfully
//     if (list) {
//         printf("Created linked list content: %s\n", (char *)list->content);

//         // Free the memory allocated for the list
//         free(list->content);
//         free(list);
//     } else {
//         printf("Failed to create the linked list.\n");
//     }

//     return 0;
// }