/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatheri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 22:18:10 by pcatheri          #+#    #+#             */
/*   Updated: 2021/02/20 22:19:26 by pcatheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
	{
    char n = 0;
    while (str[n] != '\0')
    {
        if (!(str[n] >= 'A' && str[n] <= 'Z'))
        {
            return(0);
        }
        n++;
    }
    return(1);
}