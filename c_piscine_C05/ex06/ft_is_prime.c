/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:59:47 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/26 17:26:29 by pkostura         ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	if (nb <= 1)
	{
		return (0);
	}
	return (is_divisible(nb, 2));
}

// int main()
// {

//     printf("%d\n", ft_is_prime(2147483647));     // Output: 1
//     printf("%d\n", ft_is_prime(7));     // Output: 1
//     printf("%d\n", ft_is_prime(10));    // Output: 0
//     printf("%d\n", ft_is_prime(15));    // Output: 0
//     printf("%d\n", ft_is_prime(29));    // Output: 1
//     printf("%d\n", ft_is_prime(0));     // Output: 0
//     printf("%d\n", ft_is_prime(1));     // Output: 0
//     printf("%d\n", ft_is_prime(-5));    // Output: 0

//     return (0);
// }
