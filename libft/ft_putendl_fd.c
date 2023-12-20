/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:33:23 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 15:57:42 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// #include <stdio.h>

// int main() {
//     int fd = 1;  // File descriptor 1 represents standard output (stdout)

//     char *message = "This is a test message.";

//     ft_putendl_fd(message, fd);

//     return 0;
// }