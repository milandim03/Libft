/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:57:23 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 12:17:06 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     char testCharacters[] = {'A', '9', '$', 'z', '2'};
//     int i;

//     for (i = 0; i < sizeof(testCharacters) / sizeof(testCharacters[0]); i++) 
// 	{
//         int result = ft_isalnum(testCharacters[i]);
//         if (result) 
//             printf("'%c' is alphanumeric.\n", testCharacters[i]);
// 		else 
//             printf("'%c' is not alphanumeric.\n", testCharacters[i]);
//     }
//     return 0;
// }