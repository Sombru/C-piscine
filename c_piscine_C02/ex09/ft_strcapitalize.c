/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:39 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/21 14:30:08 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		if ((str[i - 1] < 'A' || (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z') && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int main() 
// {
//    char str[] = "salut,comment tu vas ?i2mots quarante-deux;cinquante+et+un";

//    char *result = ft_strcapitalize(str);

//     printf("Capitalized string: %s\n", result);

//     return 0;
// }