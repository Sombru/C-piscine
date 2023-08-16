/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:33:31 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/20 16:55:04 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{	
		if (*str < ' ' || *str >= 127 || *str == '\0')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
//  	char str[] = " ";

//     int result = ft_str_is_printable(str);
//     printf("Result: %d\n", result); 
// }