/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:37:56 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/28 14:30:27 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(*range) * size);
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// int main() 
// {
//     int min = 1;
//     int max = 60;
// 	int i = 0;
// 	int size = max - min; 

//     int *range = ft_range(min, max);
//     if (range != NULL)
// 	{
//     while (i < max - min)
// 		{
//             printf("%d ", range[i]);
// 			i++;
//         }
//         free(range);  // Free allocated memory
//     }
// 	printf("\n");
// 	printf("numbr of numbrs: %d\n", size);
//     return 0;
// }
