/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:40:42 by milandim          #+#    #+#             */
/*   Updated: 2023/12/01 17:12:44 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*s;

	i = 0;
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (s);
	ft_memset(s, 0, nmemb * size);
	return (s);
}
// #include <stdio.h>
// int main() {
//     size_t nmemb = 2147483647; // Number of elements in the array
//     size_t size = sizeof(int); // Size(int for example)

//     int *array = (int *)ft_calloc(nmemb, size);

//     if (array) {
//         // Check  memory is successfully allocated and initialized to zero
//         for (size_t i = 0; i < nmemb; i++) {
//             printf("array[%zu] = %d\n", i, array[i]);
//         }

//         // Don't forget to free the allocated memory when you're done with it
//         free(array);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
