/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:06:03 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 13:10:05 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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

// char	*strcat(char *dest, const char *src)
// {
// 	unsigned int	d;
// 	unsigned int	s;

// 	d = 0;
// 	s = 0;
// 	while (dest[d])
// 	{
// 		d++;
// 	}
// 	while (src[s])
// 	{
// 		dest[d + s] = src[s];
// 		s++;
// 	}
// 	dest[d + s] = '\0';
// 	return (dest);
// }

// // A function to add an exclamation mark to a string
// void addExclamation(void *content) {
//     char *str = (char *)content;
//     printf("Adding an exclamation to: %s\n", str);
//     strcat(str, "!");
// }

// int main() {
//     t_list *myList = NULL; // Initialize an empty linked list

//     // Create t_list nodes and populate them with data
//     t_list *node1 = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("Goodbye");
//     t_list *node3 = ft_lstnew("Welcome");

//     // Add the nodes to the linked list
//     ft_lstadd_back(&myList, node1);
//     ft_lstadd_back(&myList, node2);
//     ft_lstadd_back(&myList, node3);

//     // Print the original contents of the list
//     printf("Original Linked List Contents:\n");
//     printList(myList);

//     // Apply addExclamation to each element in list using ft_lstiter
//     printf("Adding exclamation marks:\n");
//     ft_lstiter(myList, &addExclamation);

//     // Print the modified list
//     printf("Modified Linked List Contents:\n");
//     printList(myList);

//     // Free the memory used by the linked list
//     while (myList) {
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp);
//     }

//     return 0;
// }