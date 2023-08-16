/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:24:54 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/22 15:22:14 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	write(1, str, lenght);
}

// int main (void)
// {
// 	char str[] = "Hello Geys";
// 	ft_putstr(str);
// 	return(0);
// }