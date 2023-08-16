/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:52:47 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/22 12:52:37 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i ;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i != n)
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}				
	return (0);
}

// int main()
// {
// 	char str1[] = "hell0";
// 	char str2[] = "hello";	
// 	int result1 = ft_strncmp(str1, str2, 6);
// 	printf("Result: %d\n", result1); 
// 	return 0;
// }
