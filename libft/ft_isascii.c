/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:03:21 by milandim          #+#    #+#             */
/*   Updated: 2023/10/26 16:07:05 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// int main() {
//     int testValues[] = {-1, 0, 65, 128};
//     int i;

//     for (i = 0; i < sizeof(testValues) / sizeof(testValues[0]); i++) {
//         int result = ft_isascii(testValues[i]);
//         if (result) {
//             printf("%d is an ASCII character.\n", testValues[i]);
//         } else {
//             printf("%d is not an ASCII character.\n", testValues[i]);
//         }
//     }

//     return 0;
// }