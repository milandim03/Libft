/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:07 by milandim          #+#    #+#             */
/*   Updated: 2023/10/26 16:02:37 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
// #include <stdio.h>
// int main()
// {
//     char buffer[10]; // Create a buffer to demonstrate zeroing

//     // Initialize the buffer with some data
//     for (int i = 0; i < 10; i++) {
//         buffer[i] = 'A' + i;
//     }

//     // Print the original content of the buffer
//     printf("Original Content: %s\n", buffer);

//     // Zero out the buffer using ft_bzero
//     ft_bzero(buffer, sizeof(buffer));

//     // Print the buffer after zeroing
//     printf("Buffer After Zeroing: %s\n", buffer);

//     return 0;
// }
