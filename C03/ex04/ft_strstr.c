/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:59:55 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/26 00:00:46 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	count;

	index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index] != '\0')
	{	
		count = 0;
		while (str[index + count] != '\0'
			&& str[index + count] == to_find[count])
		{
			if (to_find[count + 1] == '\0')
				return (&str[index]);
			count++;
		}
		index++;
	}
	return (0);
}

int main ()
{
     char haystack[20] = "TutorialsPointfklj";
     char needle[10] = "Pointh";
    printf("The substring is: %s\n", ft_strstr(haystack, needle));
    return(0);
}
