/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:14:44 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/26 17:24:54 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb > 0 && i * i <= nb && i != nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int main()
// {
//     printf("%d\n", ft_sqrt(121));    // Output: 3
//     printf("%d\n", ft_sqrt(16));   // Output: 4
//     printf("%d\n", ft_sqrt(25));   // Output: 5
//     printf("%d\n", ft_sqrt(0));    // Output: 0
//     printf("%d\n", ft_sqrt(-3));   // Output: 0

//     return 0;
// }
