/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:02:25 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/20 16:50:48 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{	
		if (*str < 'A' || *str < 'Z' || *str == '\0')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
//  	char str[] = "";

//     int result = ft_str_is_lowercase(str);
//     printf("Result: %d\n", result); 
// }