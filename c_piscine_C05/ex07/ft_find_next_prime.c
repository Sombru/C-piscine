/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:42:18 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/26 17:24:22 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_divisible(int nb, long long divisor)
{
	if (divisor * divisor > nb)
	{
		return (1);
	}
	if (nb % divisor == 0)
	{
		return (0);
	}
	return (is_divisible(nb, divisor + 1));
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	if (is_divisible(nb, 2))
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

// int main()
// {
//     printf("%d\n", ft_find_next_prime(2147483647));     // Output: 7
//     printf("%d\n", ft_find_next_prime(10));    // Output: 11
//     printf("%d\n", ft_find_next_prime(15));    // Output: 17
//     printf("%d\n", ft_find_next_prime(29));    // Output: 29
//     printf("%d\n", ft_find_next_prime(0));     // Output: 2 
//     printf("%d\n", ft_find_next_prime(3));     // Output: 2
//     printf("%d\n", ft_find_next_prime(-5));    // Output: 2

//     return (0);
// }
