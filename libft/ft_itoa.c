/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:46:31 by milandim          #+#    #+#             */
/*   Updated: 2023/10/26 16:09:12 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizze(int n)
{
	int			i;
	long int	t;

	t = 10;
	i = 1;
	while (n >= t)
	{
		i++;
		t *= 10;
	}
	return (i);
}

char	*fill(char *r, int c, int s, int n)
{
	while (s-- > 0)
	{
		r[s] = c % 10 + '0';
		c /= 10;
	}
	if (n < 0)
		r[0] = '-';
	if (n == -2147483648)
		r[10] = '8';
	return (r);
}

char	*ft_itoa(int n)
{
	int		c;
	int		s;
	char	*r;

	c = n;
	s = 11;
	if (n == -2147483648)
		c = 2147483647;
	else if (n < 0)
	{
		c = -n;
		s = sizze(-n);
		s++;
	}
	else
		s = sizze(n);
	r = (char *)malloc(sizeof(char) * s + 1);
	if (!r)
		return (NULL);
	r[s] = '\0';
	r = fill(r, c, s, n);
	return (r);
}
// #include <stdio.h>
// int main() {
//     int testValues[] = {123, -456, 0, -2147483648, 2147483647};
//     int i;

//     for (i = 0; i < sizeof(testValues) / sizeof(testValues[0]); i++) {
//         int value = testValues[i];
//         char *result = ft_itoa(value);

//         if (result) {
//             printf("Integer: %d\n", value);
//             printf("String:  %s\n", result);

//             // Don't forget to free the allocated memory for the string
//             free(result);
//         } else {
//             printf("Memory allocation failed.\n");
//         }

//         printf("\n");
//     }

//     return 0;
// }