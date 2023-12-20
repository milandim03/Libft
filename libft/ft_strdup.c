/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:47:42 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:36:05 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *original_string)
{
	int		i;
	char	*dup;

	i = 0;
	while (original_string[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (original_string[i] != '\0')
	{
		dup[i] = original_string[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int main() {
//     const char *original_string = NULL;
//     char *duplicate_string;

//     duplicate_string = ft_strdup(original_string);

//     if (duplicate_string) {
//         printf("Original string: %s\n", original_string);
//         printf("Duplicate string: %s\n", duplicate_string);

//         free(duplicate_string);  // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }