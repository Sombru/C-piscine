/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:12:22 by pkostura          #+#    #+#             */
/*   Updated: 2023/06/28 14:31:45 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, const char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

char	*str_is_empty(char *c)
{
	c = (char *)malloc (1 * sizeof(char));
	c[0] = '\0';
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		sep_lenght;
	int		str_lenght;

	str_lenght = 0;
	i = 0;
	if (size == 0)
		return (str_is_empty(result));
	sep_lenght = ft_strlen(sep);
	while (i < size)
		str_lenght += ft_strlen(strs[i++]);
	str_lenght += (size - 1) * sep_lenght;
	result = (char *)malloc ((str_lenght + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strcpy (result, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i]);
		i++;
	}
	return (result);
}

// int main() 
// {
//     char *strs[] = {"Hello", "world", "from", "Walter White"};
//     int size = sizeof(strs) / sizeof(strs[0]);
//     char *sep = "( ͡° ͜ʖ ͡°)";

//     char *concatenated = ft_strjoin(size, strs, sep);
//     if (concatenated != NULL)
// 	{
//         printf("%s\n", concatenated);
// 	}
//     return 0;
// }