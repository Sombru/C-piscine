/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:49:57 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/25 15:40:12 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{	
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main(void)
// {

//     printf("%d\n", ft_recursive_factorial(5));   // Output: 120
//     printf("%d\n", ft_recursive_factorial(0));   // Output: 1
//     printf("%d\n", ft_recursive_factorial(-3));  // Output: 0

//     return (0);
// }