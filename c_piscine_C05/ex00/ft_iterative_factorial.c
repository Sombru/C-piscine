/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:53:43 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/25 15:40:15 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

// int main()
// {
//     printf("%d\n", ft_iterative_factorial(5));   // Output: 120
//     printf("%d\n", ft_iterative_factorial(0));   // Output: 1
//     printf("%d\n", ft_iterative_factorial(-3));  // Output: 0

//     return 0;
// }
