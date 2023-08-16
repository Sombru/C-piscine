/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:53:51 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/20 16:50:51 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{	
		if (*str < '0' || *str > '9' || *str == '\0')
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
//  	char str[] = "0";

//     int result = ft_str_is_numeric(str);
//     printf("Result: %d\n", result); 
// }