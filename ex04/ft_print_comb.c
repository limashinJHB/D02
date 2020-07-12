/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:23:11 by limashin          #+#    #+#             */
/*   Updated: 2020/07/12 16:43:06 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void ft_print_comb(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if(a < b && b < c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);

					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			c = '0';
			b++;			
		}
		b = '0';
		a++;

	}
}
