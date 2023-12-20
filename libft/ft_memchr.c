/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:23:52 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:17:17 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     char str[] = "This is a test string.";
//     char search_char = 't';
//     size_t n = ft_strlen(str);

//     void *result = ft_memchr(str, search_char, n);

//     if (result) {
//         printf("'%c' found in: %ld\n", search_char, (char *)result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char);
//     }

//     return 0;
// }
