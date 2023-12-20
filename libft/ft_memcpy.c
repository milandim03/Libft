/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:31:06 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:39:56 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;

	p = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (p == NULL && d == NULL)
		return (d);
	while (i < n)
	{
		d[i] = p[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>

// int main() {
//     char src[] = "Source string";
//     char dest[20];  // Destination buffer

//     // Copy data from src to dest using ft_memcpy
//     ft_memcpy(dest, src, ft_strlen(src) + 1);

//     printf("Copied string: %s\n", dest);

//     return 0;
// }