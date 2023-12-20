/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:42:40 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:25:36 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size < 1)
		return (i);
	while (s < (size - 1) && src[s] != '\0')
	{
		dst[s] = src[s];
		s++;
	}
	dst[s] = '\0';
	while (src[s])
		s++;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20];
//     const char *src = "Hello, World!";
//     size_t size = sizeof(dest);

//     size_t result = ft_strlcpy(dest, src, size);

//     printf("Copied string: %s\n", dest);
//     printf("Total length after copying: %zu\n", result);

//     return 0;
// }