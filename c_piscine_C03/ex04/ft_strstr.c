/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:04:28 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/21 14:30:33 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*s;
	const char	*t;

	s = NULL;
	t = NULL;
	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			s = str;
			t = to_find;
			while (*s == *t && *t != '\0')
			{
				s++;
				t++;
			}
			if (*t == '\0')
				return ((char *)str);
		}
		str++;
	}
	return (NULL);
}

// int	main() 
// {
//     char str[] = "Hello, woworld!4645465";
//     char to_find[] = "world";
//     char *result = ft_strstr(str, to_find);
//     if (result)
//         printf("Substring found: %s\n", result);
//     else
//         printf("Substring not found\n");
//     return 0;
// }