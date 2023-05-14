/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:19:34 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:34:43 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 127))
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
	char *str = "jsdbfj326t46t4yuirqjwhsudk phdsfjkgstfjsf";
	printf("%d",ft_str_is_printable(str));
	return (0);
}
*/
