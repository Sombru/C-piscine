/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:56:10 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/25 16:58:53 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main()
//{

//     printf("%d\n", ft_recursive_power(2, 3));    // Output: 8
//     printf("%d\n", ft_recursive_power(5, 0));    // Output: 1
//     printf("%d\n", ft_recursive_power(0, 5));    // Output: 0
//     printf("%d\n", ft_recursive_power(4, -2));   // Output: 0
//     printf("%d\n", ft_recursive_power(0, 0));    // Output: 1

//     return 0;
// }
