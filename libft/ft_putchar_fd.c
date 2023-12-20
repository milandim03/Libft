/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:59:44 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:44:21 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <stdio.h>

// int main() {
//     int fd = -1;  // File descriptor 1 represents standard output (stdout)

//     char character = 'A';

//     ft_putchar_fd(character, fd);

//     return 0;
// }