/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milandim <milandim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:33:57 by milandim          #+#    #+#             */
/*   Updated: 2023/11/08 13:20:48 by milandim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s;
	size_t	t;

	if (*little == '\0')
		return ((char *)(big));
	s = 0;
	while (big[s] != '\0' && s <= len)
	{
		t = 0;
		while (big[s + t] == little[t] && (s + t) < len)
		{
			if (little[t + 1] == '\0')
			{
				return ((char *)(big + s));
			}
			t++;
		}
		s++;
	}
	return (0);
}
/*
int main()
{
    char haystack[] = "The quick brown fox jumps over the lazy dog.";
    char needle[] = "fox";

    // Call the ft_strstr function to search for the needle in the haystack
    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Found '%s' %ld\n", needle, result - haystack);
    } else {
        printf("'%s' not found in the haystack.\n", needle);
    }

    return 0;
}
*/
