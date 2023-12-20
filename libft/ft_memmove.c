/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:38:34 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:41:51 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*d;

	t = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	else if (src < dest)
	{
		while (n-- > 0)
		{
			d[n] = t[n];
		}
	}
	else if (src >= dest)
	{
		while (i < n)
		{
			d[i] = t[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "This is a test string";
//     char buffer[20];

//     // Copy data from str to buffer using ft_memmove
//     ft_memmove(buffer, str, strlen(str) + 1);

//     printf("Copied string: %s\n", buffer);

//     return 0;
// }