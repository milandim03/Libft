/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:49:13 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:24:37 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
	s[i] = '\0';
}

// #include <stdio.h>

// // A sample function that prints the character and its index
// void print_char_with_index(unsigned int index, char *character) {
//     printf("Character at index %u: %c\n", index, *character);
// }

// int main() {
//     char *string = NULL;

//     ft_striteri(string, print_char_with_index);

//     return 0;
// }
