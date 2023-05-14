/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:39:37 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
			continue ;
		}
		else
		{
			flag = 1;
			break ;
		}
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}
/*
int main()
{
	char *str = "abdcaaSS";
	printf("%d",ft_str_is_lowercase(str));
	return (0);
}
*/
