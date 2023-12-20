/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:14 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:35:58 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == (char)c)
			return ((char *)(a + i));
		i++;
	}
	if (a[i] == (char)c)
		return ((char *)(a + i));
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	const char *s;
// 	int	c;
// 	char	*r;

// 	s = NULL;
// 	c = 'e';
// 	r = ft_strchr(s, 'e');
// 	printf("%s", r);
// 	write(1, &r, 1);
// }
