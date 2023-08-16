/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:10:30 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/20 16:53:50 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{	
		if (*str < 'A' || *str > 'Z' || *str == '\0')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
//  	char str[] = "A";

//     int result = ft_str_is_uppercase(str);
//     printf("Result: %d\n", result); 
// }