/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:44:51 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/11 15:02:25 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int main(void)
// {
//     int a = 10;
//     int b = 20;

//     printf("Before swap: a = %d, b = %d\n", a, b);

//     ft_swap(&a, &b);

//     printf("After swap: a = %d, b = %d\n", a, b);

//     return(0);
// }