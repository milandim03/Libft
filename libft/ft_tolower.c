/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:01:53 by milandim          #+#    #+#             */
/*   Updated: 2023/11/02 13:03:26 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 32;
	return (c);
}
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	l;
// 	char	*dup;

// 	l = 0; 
// 	i = 0;
// 	if (!s)
// 		return (0);
// 	if (ft_strlen(s) < start)
//  		len = 0;
// 	else if (ft_strlen(s) < len + start)
// 		len = 0;
// 	while (s[i] != '\0' && i < start)
// 		i++;
// 	dup = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (!dup)
// 		return (NULL);
// 	while (s[i] != '\0' && l < len)
// 	{
// 		dup[l] = s[i];
// 		l++;
// 		i++;
// 	}
// 	dup[l] = '\0';
