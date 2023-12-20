/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:16:46 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:42:46 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

// #include <stdio.h>

// int main() {
//     char buffer[20];

//     // Use ft_memset to fill the buffer with 'A' (65 in ASCII)
//     ft_memset(buffer, 'A', sizeof(buffer));

//     printf("Filled buffer: %s\n", buffer);

//     return 0;
// }