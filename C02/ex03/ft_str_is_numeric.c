/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:14:55 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:28:36 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
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
	char * str = "999";
	printf("%d",ft_str_is_numeric(str));
	return (0);
}
*/
