/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:06:14 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 12:23:53 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 127 && c >= 32)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// int main() {
//     char testCharacters[] = {'A', '5', '$', ' ', 'z', 31, 126, 127};
//     int i;

//     for (i = 0; i < sizeof(testCharacters) / sizeof(testCharacters[0]); i++)
// 	{
//         int result = ft_isprint(testCharacters[i]);
//         if (result)
//             printf("'%c' is a printable character.\n", testCharacters[i]);
//         else
//             printf("'%c' is not a printable charac\n", testCharacters[i]);
//     }
//     return 0;
// }