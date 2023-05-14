/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:40:38 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/26 00:26:09 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count);
}
/*
int main()
{
	// char *dest;
	// char *src;
	int n;
	char check[] ="abcdd";
	char dest[]= "abcdd";
	char src[] = "abcjj";
	n=6;
	// int len = strlcpy(check,src,n);
	int len2 = ft_strlcpy(dest, src, n);
	printf("%s",dest);
	return (0);
}
*/
