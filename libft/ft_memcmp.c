/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:16:04 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:38:35 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			s;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	s = 0;
	while (s < n)
	{
		if (p1[s] != p2[s])
		{
			return (p1[s] - p2[s]);
		}
		s++;
	}
	return (0);
}

// #include <stdio.h>

// int main() {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     size_t n = ft_strlen(str1);

//     int result = ft_memcmp(str1, str2, n);

//     if (result < 0) {
//         printf("str1 is less than str2.\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2.\n");
//     } else {
//         printf("str1 is equal to str2.\n");
//     }

//     return 0;
// }