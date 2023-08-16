/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:44:05 by pkostura          #+#    #+#             */
/*   Updated: 2023/08/16 10:43:41 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
		sign = 'N';
	else
		sign = 'P';
	write (1, &sign, 1);
}

// int main(void)
// {
// 	ft_is_negative(5);
	
// 	return(0);
// }
