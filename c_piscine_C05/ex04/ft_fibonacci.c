/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:17:09 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/25 15:40:09 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main()
// {
//     printf("%d\n", ft_fibonacci(0));    // Output: 0
//     printf("%d\n", ft_fibonacci(1));    // Output: 1
//     printf("%d\n", ft_fibonacci(2));    // Output: 1
//     printf("%d\n", ft_fibonacci(5));    // Output: 5
//     printf("%d\n", ft_fibonacci(10));   // Output: 55
//     printf("%d\n", ft_fibonacci(-3));   // Output: -1

//     return 0;
// }
