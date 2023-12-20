/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:51:27 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:25:22 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (i > size - 1)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i + j < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Hello ";
//     const char *src = "World!";
//     size_t size = sizeof(dest);

//     size_t result = ft_strlcat(dest, src, size);

//     printf("Concatenated string: %s\n", dest);
//     printf("Total length after concatenation: %zu\n", result);

//     return 0;
// }