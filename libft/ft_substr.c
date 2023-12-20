/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:17:15 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:11:14 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*dup;

	l = 0;
	if (start == 4294967295)
	{
		dup = (char *)malloc(sizeof(*s) * (1));
		if (!dup)
			return (NULL);
		dup[l] = '\0';
		return (dup);
	}
	if (!s || l > start)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dup = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s + start, len + 1);
	return (dup);
}

// #include <stdio.h>

// int main() {
//     const char *original_string = "This is a test string.";
//     unsigned int start = 5;  // Starting position
//     size_t length = 7;      // Length of the substring to extract

//     char *substring = ft_substr(original_string, start, length);

//     if (substring) {
//         printf("Original string: %s\n", original_string);
//         printf("Substring: %s\n", substring);

//         free(substring);  // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }