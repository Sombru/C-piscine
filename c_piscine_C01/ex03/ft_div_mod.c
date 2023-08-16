/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:17:30 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/11 16:00:04 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a = 5;
// 	int b = 1;
// 	int divided;
// 	int remained;

// 	ft_div_mod(a, b, &divided, &remained);

//     printf("Divided: %d\n", divided);
//     printf("Remained: %d\n", remained);	
// }