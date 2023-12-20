/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:20:14 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:25:47 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	s;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	s = 0;
	while (a[s] != '\0' && b[s] != '\0' && s < n)
	{
		if (!(a[s] == b[s]))
		{
			return (a[s] - b[s]);
		}
		s++;
	}
	if (s < n)
	{
		return (a[s] - b[s]);
	}
	return (0);
}

// #include <stdio.h>

// int main() {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, There!";
//     size_t n = 7;

//     int result = ft_strncmp(str1, str2, n);

//     if (result < 0) {
//         printf("str1 is less than str2.\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2.\n");
//     } else {
//         printf("str1 is equal to str2.\n");
//     }

//     return 0;
// }