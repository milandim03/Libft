/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:40:05 by milandim          #+#    #+#             */
/*   Updated: 2023/10/27 12:25:53 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char *originalString = "   Hello, World!   ";
//     char *setToRemove = " H!o"; // Define to remove (in this case, space)

//     char *trimmedString = ft_strtrim(originalString, setToRemove);

//     if (trimmedString) {
//         printf("Original String: \"%s\"\n", originalString);
//         printf("Trimmed String: \"%s\"\n", trimmedString);

//         // Don't forget to free the trimmedString when you're done with it
//         free(trimmedString);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	z;
	int	c;
	char	*p1;
	char	*a;

	i = 0;
	l = 0;
	c = 1;
	if (s1[i] == '\0')
	{
		a = (char *)malloc(sizeof(char) * 1);
		a[0] = '\0';
		return (a);
	}
	while (c > 0)
	{
		c = 0;
		l = 0;
		while (set[l] != '\0' && s1[i] != '\0')
		{
			if (s1[i] == set[l])
			{
				i++;
				c++;
			}
			else
				l++;
		}
	}
	z = ft_strlen(s1);
	c = 1;
	while (c > 0)
	{
		c = 0;
		l = 0;
		while (set[l] != '\0')
		{
			if (s1[z - 1] == set[l])
			{
				z--;
				c++;
			}
			else
				l++;
		}
	}
	if (i < z)
		p1 = (char *)malloc(sizeof(char) * (z - i + 1));
	else
		p1 = (char *)malloc(sizeof(char) * (i - z + 1));
	if (!p1)
		return (NULL);
	l = 0;
	while (i < z)
		p1[l++] = s1[i++];
	if (s1[i - 1] != '\0')
		p1[l] = '\0';
	return (p1);
}*/
