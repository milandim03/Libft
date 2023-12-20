/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:06:20 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 13:51:38 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// int main() {
//     char testCharacters[] = {'5', 'A', '0', '$', '9'};
//     int i;

//     for (i = 0; i < sizeof(testCharacters) / sizeof(testCharacters[0]); i++)
// 	{
//         int result = ft_isdigit(testCharacters[i]);
//         if (result)
//             printf("'%c' is a digit.\n", testCharacters[i]);
//         else
//             printf("'%c' is not a dig\n", testCharacters[i]);
//     }

//     return 0;
// }