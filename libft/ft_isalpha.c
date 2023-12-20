/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:42:57 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 13:59:50 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 'Z' && c < 'a') || c < 'A' || c > 'z')
	{
		return (0);
	}
	return (1);
}
// #include <stdio.h>
// int main()
// {
//     char testCharacters[] = {'A', '9', '$', 'z', 'B'};
//     int i;

//     for (i = 0; i < sizeof(testCharacters) / sizeof(testCharacters[0]); i++) 
// 	{
//         int result = ft_str_is_alpha(testCharacters[i]);
//         if (result)
//             printf("'%c' is an alphabetic character.\n", testCharacters[i]);
//         else
//             printf("'%c' is not an alphabetic charac\n", testCharacters[i]);
//     }
//     return 0;
// }