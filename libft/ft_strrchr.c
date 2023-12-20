/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:08:59 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:16:59 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     const char *str = "This is a test string.";
//     int search_char = 't';

//     char *result = ft_strrchr(str, search_char);

//     if (result) {
//         printf("Last '%c' found at: %ld\n", search_char, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char);
//     }

//     return 0;
// }