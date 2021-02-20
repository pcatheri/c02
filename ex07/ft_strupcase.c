/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatheri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 22:27:28 by pcatheri          #+#    #+#             */
/*   Updated: 2021/02/20 22:27:45 by pcatheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strupcase(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
       *str += 32;
        str++;
    }
    printf("%s\"\n", str);
    return(str);
}
int main()
{
   char *str = "hgAkdodm";

   ft_strupcase(str);

   printf("%s\"\n", str);

   return 0;
}
