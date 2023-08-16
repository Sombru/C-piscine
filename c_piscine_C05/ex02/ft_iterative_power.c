/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:04:39 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/25 15:40:33 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main()
// {
//     printf("%d\n", ft_iterative_power(2, 4));    // Output: 16
//     printf("%d\n", ft_iterative_power(5, 0));    // Output: 1
//     printf("%d\n", ft_iterative_power(0, 5));    // Output: 0
//     printf("%d\n", ft_iterative_power(4, -2));   // Output: 0

//     return 0;
// }
