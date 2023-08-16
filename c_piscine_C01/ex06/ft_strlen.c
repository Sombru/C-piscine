/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:06:08 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/14 15:03:52 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		str++;
		lenght++;
	}
	return (lenght);
}

// int main()
// {
//     char* str = "World!";
// 	int length = ft_strlen(str);
// 	printf("Length of the string %d\n", length);
//     ft_strlen(str);
//     return (0);
// }