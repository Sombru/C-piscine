/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:54:02 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/28 14:31:21 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(*range) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

// int main() 
// {
//     int min = 6;
//     int max = 60;
// 	int i = 0;
// 	int *range = NULL;

//     int size = ft_ultimate_range(&range, min, max);
//     if (size != -1)
// 	{
//     while (i < max - min)
// 		{
//             printf(" %d", range[i]);
// 			i++;
//         }
//         free(range);  // Free allocated memory
//     }
// 	printf("\n");
// 	printf("numbr of numbrs: %d\n", ft_ultimate_range(&range, min, max));
//     return 0;
// }
