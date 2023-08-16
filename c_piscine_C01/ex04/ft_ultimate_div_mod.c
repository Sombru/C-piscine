/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:51:39 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/12 11:14:10 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
// int main(void)
// {
// 	int a = 24;
// 	int b = 58;

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("Diveded %d\n",a);
// 	printf("Remained %d\n",b);
// }