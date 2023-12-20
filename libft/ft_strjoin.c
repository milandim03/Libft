/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:30:59 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:26:54 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			l;
	char			*r;

	i = ft_strlen(s1);
	l = ft_strlen(s2);
	r = (char *)malloc(sizeof(char) * (l + i + 1));
	if (!r)
		return (NULL);
	i = 0;
	l = 0;
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[l] != '\0')
	{
		r[i + l] = s2[l];
		l++;
	}
	r[i + l] = '\0';
	return (r);
}
// -1?

// #include <stdio.h>

// int main() {
//     const char *s1 = "HEloo ";
//     const char *s2 = "World!";

//     char *result = ft_strjoin(s1, s2);

//     if (result) {
//         printf("Concatenated string: %s\n", result);

//         free(result);  // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
