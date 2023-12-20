/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:47:55 by milandim          #+#    #+#             */
/*   Updated: 2023/11/07 13:12:32 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*i;
	void	*c;

	list = NULL;
	while (lst != NULL)
	{
		c = f(lst->content);
		i = ft_lstnew(c);
		if (!i)
		{
			ft_lstclear(&list, del);
			del(c);
			return (0);
		}
		ft_lstadd_back(&list, i);
		lst = lst->next;
	}
	return (list);
}

// #include <stdio.h>

// void *add_one(void *data) {
//     int *num = (int *)data;
//     int *result = (int *)malloc(sizeof(int));
//     if (result) {
//         *result = (*num) + 1;
//     }
//     return result;
// }

// void free_int(void *data) {
//     free(data);
// }

// int main() {
//     // Create a linked list for testing
//     t_list *list = NULL;

//     for (int i = 1; i <= 5; i++) {
//         int *value = (int *)malloc(sizeof(int));
//         *value = i;

//         t_list *new_node = ft_lstnew(value);
//         if (new_node) {
//             ft_lstadd_back(&list, new_node);
//         } else {
//             // Handle memory allocation failure
//         }
//     }

//     // Apply the ft_lstmap function to create a new list
//     t_list *new_list = ft_lstmap(list, add_one, free_int);

//     // Print the content of the new list
//     t_list *current = new_list;
//     while (current) {
//         int *num = (int *)current->content;
//         printf("%d ", *num);
//         current = current->next;
//     }
//     printf("\n");

//     // Free the original list and the new list
//     ft_lstclear(&list, free_int);
//     ft_lstclear(&new_list, free_int);

//     return 0;
// }