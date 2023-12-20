/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:52:56 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 16:05:29 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// // A sample mapping function that converts characters to uppercase
// char map_function(unsigned int index, char character) {
//     if (character >= 'a' && character <= 'z') {
//         return character - ('a' - 'A');
//     }
//     return character;
// }

// int main() {
//     const char *input_string = "Hello, World!";

//     char *result = ft_strmapi(input_string, map_function);

//     if (result) {
//         printf("Original string: %s\n", input_string);
//         printf("Modified string: %s\n", result);

//         free(result);  // Remember to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }