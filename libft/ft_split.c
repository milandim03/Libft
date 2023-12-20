/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:31 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:26:26 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counta(const char *s, char c, int i)
{
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

int	size(const char *s, char c, int i)
{
	int	b;

	b = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		b++;
	}
	return (b + 1);
}

int	allcount(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (n);
}

void	*frree(char **r, int t)
{
	while (t >= 0)
		free(r[t--]);
	free(r);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int				i;
	int				a;
	int				t;
	char			**r;

	t = 0;
	i = 0;
	if (!s)
		return (NULL);
	r = malloc(sizeof (char *) * (allcount(s, c) + 1));
	if (!r)
		return (NULL);
	while (t < allcount(s, c))
	{
		i = counta(s, c, i);
		r[t] = malloc(sizeof(char) * size(s, c, i));
		if (!r[t])
			return (frree(r, t));
		a = 0;
		while (s[i] != c && s[i] != '\0')
			r[t][a++] = s[i++];
		r[t++][a] = '\0';
	}
	r[t] = NULL;
	return (r);
}
// #include <stdio.h>

// int     main(void)
// {
//     char        *s = "sstrsmassmissssssssmos";
//     char        c = 's'; // The character to split the string

//     char **result = ft_split(s, c);

//     // Check if ft_split was successful (result should not be NULL)
//     if (result != NULL) {
//         // Iterate through the array of strings and print each one
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("%s\n", result[i]);
//             free(result[i]);
//         }

//         // Don't forget to free the memory allocated by ft_split
//         // (You need to implement the memory deallocation in ft_split)
//         // Example:
//     free(result);
//     } else {
//         printf("ft_split failed\n");
//     }

//     return 0;
// }
